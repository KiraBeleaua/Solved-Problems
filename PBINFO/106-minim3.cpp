#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t a, b, c;
	cin >> a >> b >> c;
	if (a < b && a < c) 
	{

		cout << a;
	}
	else if (b < a && b < c)
	{
		cout << b;
	}
	else
	{
		cout << c;
	}
}