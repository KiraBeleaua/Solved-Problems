#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, a, k;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (i == 1 || k > a) {
			k = a;
		}

	}
	cout << k;

}


