#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>
#include <fstream>
#include <set>


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

int strlen(char v[]) {
	int size = 0;
	for (int i = 0; true; i++) {
		if (v[i] == '\0') {
			size = i;
			break;
		}
	}
	return size;
}

void strcpy(char v[], char w[]) {
	for (int i = 0; true; i++) {
		if (w[i] == '\0') {
			break;
		}
		v[i] = w[i];
	}
	return;
}

int strcmp(char v[], char w[]) {
	int result = 0;
	for (int i = 0; true; i++) {
		if (v[i] > w[i]) {
			result++;
			break;
		}
		else if (w[i] > v[i]) {
			result--;
			break;
		}
		if (v[i] == '\0' || w[i] == '\0') {
			break;
		}
	}
	return result;
}
//refa ,de gasit tot w in v; return partea de unde incepe;
int strstr(char v[], char w[]) {
	int indice = 0;
	for (int i = 0; strlen(v); i++) {
		for (int j = 0; true; j++) {
			if (w[j] == '\0') {
				break;
			}
			if (w[j] == v[i]) {
				indice = i;
			}
		}
	}
	return indice;
}

int strchr(char v[], char x) {
	int indice = 0;
	for (int i = 0; strlen(v); i++) {
		if (v[i] == x) {
			indice = i;
			break;
		}
	}
	return indice;
}

void strlower(char v[]) {
	for (int i = 0; strlen(v); i++) {
		if (v[i] == '\0') {
			break;
		}
		if (v[i] <= 'Z' && v[i] >= 'A') {
			v[i] += 'a' - 'A';
		}
	}
	return;
}

void strupper(char v[]) {
	for (int i = 0; i < strlen(v); i++) {
		if (v[i] >= 'z' && v[i] <= 'a') {
			v[i] -= 'a' - 'A';
		}
	}
	return;
}

int findstr(char v[], char w[]) {
	int64_t indice = -1, k = 0, lenv = 0, lenw = 0;
	lenv = strlen(v);
	lenw = strlen(w);
	for (int i = 0; i < lenv; i++) {
		k = 0;
		for (int j = 0; j < lenw; j++) {
			if (v[i + j] != w[j])
				break;
			k++;
		}
		if (k == lenw) {
			indice = i;
			break;
		}
	}
	return indice;
}

int cautareBinara(vector<int64_t>& v, int64_t x) {
	int stanga = 0;
	int mijloc = (v.size() - 1) / 2;
	int dreapta = v.size() - 1;

	do {
		mijloc = (stanga + dreapta) / 2;
		if (v[mijloc] == x) {
			return mijloc;
		}
		else if (v[mijloc] < x) {
			stanga = mijloc + 1;
		}
		else if (v[mijloc] > x) {
			dreapta = mijloc - 1;
		}
	} while (stanga <= dreapta);
	return -1;
}

int main()
{
	int64_t n, m, h = 0;
	vector <vector <int64_t> > b;
	cin >> n >> m;
	b.resize(n);
	for (int i = 0; i < n; i++) {
		b[i].resize(m);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> b[i][j];
			if (b[i][j] % 2 == 0) {
				h += b[i][j];
			}
		}
	}
	
	cout << h;
}
