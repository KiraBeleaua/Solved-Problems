#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <bitset>

using namespace std;

int main() {
	int64_t n, a;
	vector <int> v, w;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		if (v[i] % v[n-1] == 0) {
			w.push_back(v[i]);
		}
	}
	for (int i = 0; i < w.size(); i++) {
		cout << w[i] << " " ;
	}
}

