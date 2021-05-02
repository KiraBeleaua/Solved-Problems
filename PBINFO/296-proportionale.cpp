#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>

using namespace std;

void printVector(vector<int64_t> v) {
	for (auto& el : v) {
		cout << el << " ";
	}
	cout << "\n";
}

int maximAdi(vector<int64_t> v) {
	int64_t maxim = v[0], indice = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		if (v[i] < v[i + 1] && maxim < v[i + 1]) {
			maxim = v[i + 1];
			indice = i + 1;

		}
		else if (v[i] > v[i + 1] && maxim < v[i]) {
			maxim = v[i];
			indice = i;
		}
	}

	return maxim;
}

int maxim(vector<int64_t> v) {
	int64_t m = v[0];
	for (auto el : v) {
		m = max(el, m);
	}
	return m;
}

vector<int64_t> generateRandomVector(int64_t n, int64_t left, int64_t right) {
	srand(time(NULL));

	int64_t space = right - left;
	vector <int64_t> v;
	for (int i = 0; i < n; i++) {
		int64_t el = rand() % space + left;
		v.push_back(el);
	}
	return v;
}

int64_t maxVector(vector<int64_t> a) {
	int64_t m = a[0];
	for (int i = 1; i < a.size(); i++) {
		m = max(a[i], m);
	}
	return m;
}

int64_t maximIndiceVector(vector<int64_t> a) {
	int64_t m = a[0];
	int indice = 0;
	for (int i = 1; i < a.size(); i++) {
		if (a[i] > m) {
			m = a[i];
			indice = i;
		}
	}
	return indice;
}

int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}

int main()
{
	int64_t n, a, b;
	cin >> n;
	vector <int> v, w, h1 , h2;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		cin >> a;
		w.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int mar = gcd(v[j], w[i]);
			h1.push_back(w[i] / mar);
			h2.push_back(v[j] / mar);
		}
	}
	for (int z = 0; z < h1.size(); z++) {
		int64_t k = 0;
		//cout << h1[z] << "/" << h2[z] << "\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int mar = gcd(v[j], w[i]);
				if (h1[z] == w[i] / mar && h2[z] == v[j] / mar) {
					k++;
					//cout << w[i] << "/" << v[j] << " ";
					break;
				}
			}
		}
		//cout << "\n";
		if (k == n) {
			cout << "DA";
			return 0;
		}
	}
	cout << "NU";
}