#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	int64_t n, b, c, a;
	cin >> n;
	c = n % 4;
	b = n % 400;
	a = n % 100;
	if (c == 0 && a != 0 || b == 0) {
		cout << "bisect";
	}
	else  {
		cout << "nebisect";
	}
}