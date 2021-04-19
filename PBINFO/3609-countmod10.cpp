#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t a, b, c, d;
	cin >> a >> b;
	c = b/10 - a/10;
	if (a % 10 == 0)
		c = c + 1;
    cout << c;
}