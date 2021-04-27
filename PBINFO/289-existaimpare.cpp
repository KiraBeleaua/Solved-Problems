#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <bitset>

using namespace std;

int main() {
	int64_t n, a, k = 0;
	vector <int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a % 2 == 1) {
			k++;
		}
	}
	if (k != 0) {
		cout << "DA";
	}
	else {
		cout << "NU";
	}
}