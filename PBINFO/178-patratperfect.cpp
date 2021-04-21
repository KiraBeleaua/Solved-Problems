#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t n, b, c, B;
	cin >> n;
	if (n == 0 || n == 1) {
		cout << "da";
		return 0;
	}
	b = sqrt(n);
	B = b * b;
	if (B == n) {
		cout << "da";
	}
	else if (B < n) {
		cout << "nu";
	}
}