#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <bitset>

using namespace std;

int main() {
	int64_t n, a, p = 0, imp = 0, k;
	vector <int> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a % 2 == 1) {
			imp++;
		}
		else if (a % 2 == 0) {
			p++;
		}
	}
	if (p >= imp) {
		cout << p - imp;
	}
	else {
		cout << imp - p;
	}

}

