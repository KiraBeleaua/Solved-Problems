#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t a;
	cin >> a;
	if (a <= 15) {
		cout << pow(a, 2);
	}
	else if (30>=a && a >= 16)
	{
		cout << (a % 10) + (a / 10 % a);
	}
	else {
		cout << (a % 10) * (a / 10 % a);
	}

}