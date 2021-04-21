#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("2lan.in");
	ofstream fout("2lan.out");
	int64_t n, a, c, b;
	fin >> n;
	a = n % 4;
	if (n == 0) {
		fout << 1;
		return 0;
	}
	if (a == 0) {
		fout << 6;
	}
	else if (a == 1) {
		fout << 2;
	}
	else if (a == 2) {
		fout << 4;
	}
	else if (a == 3) {
		fout << 8;
	}
}

