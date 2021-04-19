#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	double B, b, l, d, h, k;
	cin >> B >> b >> l;
	d = (B - b) / 2;
	h = sqrt(pow(l, 2) - pow(d, 2));
	k = sqrt(pow(B - d, 2) + pow(h, 2));
	cout << k;
}