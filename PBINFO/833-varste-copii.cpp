#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t a, b, v;
	cin >> a >> b;
	if (a > b)
	{
		v = a - b;
		cout << "Primul copil este mai mare cu" << " " << v << " ani";
	}
	else if (b > a)
	{
		v = b - a;
		cout << "Al doilea copil este mai mare cu" << " " << v << " ani";
	}
	else

	{
		cout << "Copiii au varste egale";
	}
}