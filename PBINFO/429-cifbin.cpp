#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, c = 0, o = 0;
	cin >> n;
	while (n != 0) {
		int u = n % 2;
		if (u == 1) {
			c++;
		}
		if (u == 0) {
			o++;
		}
		n /= 2;
	}
	cout << o << " " << c;
}
