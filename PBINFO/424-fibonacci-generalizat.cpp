#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, a = 1, b = 1;
	cin >> a >> b >> n;
	for (int i = 1;true; i++) {
		if (i == 1) {
			cout << a << " ";
		}
		else if (i == 2) {
			cout << b << " ";
		}
		else {
			int64_t c = a + b;
			a = b;
			b = c;
			if (abs(c) > n) {
				break;
			}
			cout << c << " ";
		}
	}
}
