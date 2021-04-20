#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t a, b, x;
	cin >> a >> b >> x;
	if (x > a && x > b)
	{
		cout << "NU";

	}
	else if (x < a && x < b)
	{
		cout << "NU";

	}
	else
	{
		cout << "DA";

	}
}