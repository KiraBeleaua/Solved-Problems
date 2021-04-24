#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, a, k;
	vector<int> v = {};
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a % 2 == 0) {
			v.push_back(a);
		}
		
	}
	k = 1;
	for (int i = 0; i <= v.size() - 2; i++) {
		if (v[i + 1] < v[i] ) {
			k = 0;
		}
	}
	if (k == 1) {
		cout << "DA";
	}
	else {
		cout << "NU";
	}
}



