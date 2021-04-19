#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	double d1, d2, l, p, a, z;
	cin >> d1 >> d2;
	a = d1 * d2 / 2;
	l = pow(d1 / 2, 2) + pow(d2 / 2, 2);
	z = sqrt(l);
	p = 4 * z;
    cout << p << " " << a;
}