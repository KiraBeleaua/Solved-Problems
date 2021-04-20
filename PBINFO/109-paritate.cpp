#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t a;
	cin >> a;
	if (a % 2)
		cout << a << " este impar";
	else
		cout << a << " este par";
}