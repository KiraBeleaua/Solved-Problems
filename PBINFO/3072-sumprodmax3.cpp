#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, a, b, c;
	cin >> n;
	if (n % 3 == 0) {
		a = n / 3;
		b = c = a;
	}
	else if (n % 3 == 1) {
		a = n / 3;
		b = n / 3;
		c = n / 3 + 1;
	}
	else {
		a = n / 3;
		b = n / 3 + 1;
		c = b;
	}
	cout << a << " " << b << " " << c;
}
