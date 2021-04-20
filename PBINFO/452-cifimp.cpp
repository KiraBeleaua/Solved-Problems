#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t a,b,c,d;
	cin >> a;
	    b = a % 2;
		c = (a / 10) % 2;
		d = (a / 100) % 2;
		cout << b + c + d;
}
    