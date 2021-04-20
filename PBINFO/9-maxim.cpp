#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t a, b, c, d, e, f;
	cin >> a >> b >> c;

	if (a >= b && a >= c) {
		d = a;
	}
	else if (b >= a && b >= c) {
		d = b;
	}
	else if (c >= a && c >= b) {
		d = c;
	}
	
	if (a <= b && a <= c) {
		e = a;
	}
	else if (b <= a && b <= c) {
		e = b;
	}
	else if (c <= a && c <= b) {
		e = c;
	}
	cout << d - e;
}
