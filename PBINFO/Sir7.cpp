#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int64_t p, k, kb, numar;
	cin >> p >> k;
	if (k % 2 == 1) {
		numar = (k - 1) / 2 * 10 * 3 + p;
		cout << numar;
	}
	else {
		kb = k - 1;
		numar = (kb - 1) / 2 * 10 * 3 + p;
		numar = numar + 10;
		cout << numar;
	}
}