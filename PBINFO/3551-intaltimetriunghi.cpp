#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	float h;
	double c1, c2, i;
	cin >> c1 >> c2 >> i;
	h = c1 * c2 / i;
	h = h * 100;
	h = (int)h;
		h = h / 100;
     cout << fixed << setprecision(2) << h;
}