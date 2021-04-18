#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int64_t t1, t2, n, m, z, tone;
	cin >> t1 >> t2 >> n >> m >> z;
	tone = (n * t1 + m * t2) * z;
		cout << tone;
}