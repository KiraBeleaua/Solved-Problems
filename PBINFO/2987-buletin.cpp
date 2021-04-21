#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t a, b, c, d, e, f, g;
	cin >> a;
	b = (a / 1000000) % 10;
	c = (a / 10000000) % 10;
	d = (a / 100000000) % 10;
	e = (a / 1000000000) % 10;
	f = (a / 10000000000) % 10;
	g = (a / 100000000000) % 10;
	cout << g << f << " " << e << d << " " << c << b;


}