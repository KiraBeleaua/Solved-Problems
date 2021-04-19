#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int64_t a, b, p, ar, d;
	cin >> a >> b;
	p = (a + b) * 2;
	ar = a * b;
	d = pow(a, 2) + pow(b, 2);
	cout << p << " " << ar << " " << d;
}