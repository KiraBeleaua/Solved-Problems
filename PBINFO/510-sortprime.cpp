#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <bitset>

using namespace std;

void printVector(vector <int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}

bool isPrime(int number) {
	if (number == 0 || number == 1)
		return false;

	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

int minimVector(vector <int> v) {
	int minim = v[0];
	int indice = 0;
	for (int i = 0; i < v.size(); i++) {
		if (minim > v[i]) {
			minim = v[i];
			indice = i;
		}
	}
	return indice;
}

void sortVector1(vector <int>& v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] > v[j])
				swap(v[i], v[j]);
		}
	}
}

void sortVector2(vector <int>& v) {
	vector <int> w;
	for (int i = 0; i < v.size(); i++) {
		int indice = minimVector(v);
		w.push_back(v[indice]);
		v.erase(v.begin() + indice);
	}
	v = w;
}

int main() {
	int64_t n, a;
	vector <int> v, w;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		if (isPrime(v[i]))
			w.push_back(v[i]);
	}
	sortVector1(w);
	printVector(w);

}

