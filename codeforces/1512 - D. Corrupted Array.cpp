#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>
#include <fstream>
#include <set>
#include <string>
#include <cstdlib>


using namespace std;




int main() {
	int64_t n, x = 1, t, cnt = 0;
	vector <string> b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		n++;
		n++;
		vector <int64_t> v;
		v.resize(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		int64_t s = 0;
		sort(v.begin(), v.end());
		for (int i = 0; i < n - 1; i++) {
			s += v[i];
		}
		int64_t ix = -1, is = -1;
		for (int i = 0; i < n - 1; i++) {
			s -= v[i];
			if (s == v[n - 1]) {
				ix = i;
				is = n - 1;
			}
			s += v[i];
		}
		s -= v[n - 2];
		if (s == v[n - 2]) {
			ix = n - 1;
			is = n - 2;
		}
		if (ix == -1) {
			cout << -1 << "\n";
			continue;
		}
		for (int i = 0; i < n; i++) {
			if (i != ix && i != is) {
				cout << v[i] << " ";
			}
		}
		cout << "\n";
	}
}





