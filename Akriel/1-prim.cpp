#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, s, r, l, w, estePrim = 1;
	cin >> n;
	l = 2;
	r = n - 1;
	for (int i = 2; r >= i; i++) {
		if (n % i == 0) {
			estePrim = 0;
			break;
		}
	}
	if (estePrim == 1) {
		cout << "este prim";
	}
	else {
		cout << "nu este prim";
	}

}


