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

int main()
{
	int64_t n, a, k = 0, c, d;
	vector <int64_t> v, w, e;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < n - 1; i++) {
		c = v[i];
		d = v[n - 1];
		while (d != 0) {
			int64_t aux = c % d;
			c = d;
			d = aux;
		}
		if (c == 1) {
			w.push_back(v[i]);
		}
	}
	k = w.size();
	for (int i = 0; i < k; i++) {
		int indice = maximIndiceVector(w);
		e.push_back(w[indice]);
		w.erase(w.begin() + indice);
	}
	printVector(e);
}