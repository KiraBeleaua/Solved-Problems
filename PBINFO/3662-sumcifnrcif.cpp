#include <iostream>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, sum = 0,digits = 1;
	cin >> n;
	while (n > 0) {
		sum += (n % 10);
		n /= 10;
	}

	while (sum >= 10) {
		digits += 1;
		sum /= 10;
	}
	cout << digits;
}
