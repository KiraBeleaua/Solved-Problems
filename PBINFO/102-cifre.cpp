#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int64_t a, b, c, d;
	cin >> a;
	b = a % 10;
	c = (a / 10) % 10;
	d = b + c;
	cout << d;
}