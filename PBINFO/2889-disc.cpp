#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

const double pi = 3.14159265359;

int main()
{

	double r, arie, perimetru;
	cin >> r;
	arie = pi * pow(r, 2);
	perimetru = 2 * pi * r;
	cout << fixed << setprecision(6) << arie;
	cout << " ";
	cout << fixed << setprecision(6) << perimetru;
}