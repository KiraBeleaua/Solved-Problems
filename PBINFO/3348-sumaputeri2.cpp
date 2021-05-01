#include <iostream>
#include <fstream>
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
	vector <int> w, p;
	for (int i = 0; i < v.size(); i++) {
		int indice = minimVector(v);
		w.push_back(v[indice]);
		v.erase(v.begin() + indice);
	}
	v = w;
}

int64_t powerMath(int64_t x, int64_t n, int64_t m) {
	x %= m;
	if (n == 1)
		return x;

	if (n % 2 == 0)
		return powerMath(x * x, n / 2, m) % m;
	else
		return (x * powerMath(x * x, (n - 1) / 2, m)) % m;
}

int64_t powerInfo(int64_t x, int64_t n, int64_t m) {
	int64_t c = x % m;
	int64_t r = 1;
	while (n != 0) {
		int b = n % 2;
		n /= 2;

		if (b == 1) {
			r *= c;
			r %= m;
		}

		c *= c;
		c %= m;
	}
	return r;
}

int main() {
	int64_t n, c = 0, o = 0, b=2;
	vector <int> v;
	cin >> n;
	while (n != 0) {
		int u = n % b;
		v.push_back(u);
		n /= b;
	}

	for (int i = 0; i < v.size(); i++)
		if (v[i] == 1)
			cout << (int64_t)pow(2, i) << " ";
}

