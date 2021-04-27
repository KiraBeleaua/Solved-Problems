#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, a = 1, b = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i == 1 || i == 2) {
			cout << 1 << " ";
		}
		else {
			int c = a + b;
			a = b;
			b = c;
			cout << c << " ";
		}
		 
	}
}
