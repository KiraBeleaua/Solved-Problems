#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	int64_t a, b, c, d;
	cin >> a;
	b = (a / 10) % 10;
	c = (a / 100) % 10;
	d = a % 10;
	if (d == b && b == c) {
		cout << "da";
	}
	else
	{
		cout << "nu";
	}

}