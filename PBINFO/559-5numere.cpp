#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t a, b, c, d, e, f, g, z;
	cin >> a >> b >> c >> d >> e;
	f = a + b + c + d + e;

	if (a < b && a < c && a < d && a < e) {
		g = a;
		a = b;
	}
	else if (b < a && b < c && b < d && b < e) {
		g = b;
		b = a;
	}
	else if (c < a && c < b && c < d && c < e) {
		g = c;
		c = a;
	}
	else if (d < a && d < b && d < c && d < e) {
		g = d;
		d = a;
	}
	else if (e < a && e < b && e < c && e < d) {
		g = e;
		e = a;
	}
	f = f - g;

	if (a <= b && a <= c && a <= d && a <= e) {
		z = a;
	}
	else if (b <= a && b <= c && b <= d && b <= e) {
		z = b;
	}
	else if (c <= a && c <= b && c <= d && c <= e) {
		z = c;
	}
	else if (d <= a && d <= b && d <= c && d <= e) {
		z = d;
	}
	else if (e <= a && e <= b && e <= c && e <= d) {
		z = e;
	}
	f = f - z;
	cout << f;