#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, d, x= 0;
	cin >> n;
	for (d = 1; d <= sqrt(n); d++)
		if (n % d == 0) {
			if (d % 2==0){
			x += d;
			}
			int d2 = n / d;
			if (d2 != d) {
				if (d2 % 2 == 0) {
					x += d2;
				}
			}
		}
	cout << x;
}