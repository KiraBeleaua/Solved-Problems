#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	int64_t n, a, b, c;
	cin >> n;
	a = n % 10;
	b = (n / 10) % 10;
	c = n - (a + b * 10);
	if (c == n) {
		cout << c;
	}
	else if (n > c) {
		cout << c+100;
	}
}
