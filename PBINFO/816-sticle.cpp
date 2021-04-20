#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t x, y, z, a;
	cin >> x >> y;
	z = y / x;
	a = y % x;
		if (a > 1)
			cout << z + 1;
		else
			cout << z;
}