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

int main() {
	int64_t n, a;
	vector <int> v, w;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		int indice = minimVector(v);
		w.push_back(v[indice]);
		v.erase(v.begin() + indice);
	}
	printVector(w);
}

