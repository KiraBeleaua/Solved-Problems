#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;
#define cin fin
#define cout fout

int main()
{
	ifstream fin("elfii.in");
	ofstream fout("elfii.out");
	int64_t x, y, z, w, v, i, a, b, c,k,j;
	cin >> x >> y >> z;
	w = x + y * 10 + z * 100;
	v = x + z * 10 + y * 100;
	i = y + x * 10 + z * 100;
	a = y + z * 10 + x * 100;
	b = z + x * 10 + y * 100;
	c = z + y * 10 + x * 100;
	int64_t m;
	k = 0;
	m = -1;
	if (w % 2 == 0 && w / 100 != 0) {
		k++;
		m = max(m, w);
	}
	if (v % 2 == 0 && v / 100 != 0) {
		k++;
		m = max(m, v);
	}   
	if (i % 2 == 0 && i / 100 != 0) {
		k++;
		m = max(m, i);
	}
	if (a % 2 == 0 && a / 100 != 0) {
		k++;
		m = max(m, a);
	}
	if (b % 2 == 0 && b / 100 != 0) {
		k++;
		m = max(m, b);
	}
	if (c % 2 == 0 && c / 100 != 0) {
		k++;
		m = max(m, c);
	}
	if (k == 0) {
		cout << "Poate data viitoare!";
	}
	else
	{
		cout << k << "\n" << m;
	}
}

