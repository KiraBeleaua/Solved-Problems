#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, d, x;
	cin >> n;
	int64_t m;
	for (d = 2; d <= sqrt(n)+1; d++)
		if (n % d == 0) {
			m = d;
			break;
		}
	cout << m*m;
}