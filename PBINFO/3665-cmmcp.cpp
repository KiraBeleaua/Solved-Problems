#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, k = 0;
	cin >> n;
	if (n == k) {
		cout << "0";
	}
	else {
	while (n > 0) {
		if (n % 2 == 0 && k < n % 10) {
			k = n % 10;
		}
		n /= 10;
	}
	if (k == 0) {
		cout << "10";
	}
	else {
		cout << k;
	}
	}
}







