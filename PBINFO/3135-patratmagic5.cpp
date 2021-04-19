#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int64_t n, patratMagic;
	cin >> n;
	patratMagic = n*(n * n + 1) / 2;
	cout << patratMagic;
}