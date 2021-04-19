#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int64_t g, o, picioareG, picioareO, capete, picioare;
	cin >> g >> o;
	picioareG = 2 * g;
	picioareO = 4 * o;
	capete = g + o;
	picioare = picioareG + picioareO;
	cout << capete << " " << picioare;
}