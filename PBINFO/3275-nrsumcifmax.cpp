#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t a, b, c, d, e, i, z;
	cin >> a >> b >> c;
	d = (a % 10) + (a / 10);
	e = (b % 10) + (b / 10);
	i = (c % 10) + (c / 10);
	z = max(max(d, e), i);

	if (d == z) {
		cout << a << " ";
	}
	if (e == z) {
		cout << b << " ";
	}
	if (i == z) {
		cout << c << " ";
	}
}
