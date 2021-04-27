#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector <int> v;
	int64_t n, a, k = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < n - 1; i++)
		if (v[i] != v[i + 1]) {
			k = 1;
			break;
		}
	if (k == 1) {
		cout << "NU";
	}
	else {
		cout << "DA";
	}
}

