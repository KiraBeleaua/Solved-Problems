#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("9lan.in");
	ofstream fout("9lan.out");
	int64_t a;
	fin >> a;
	a = a % 2;
	if (a == 0) {
	fout << 1;
}
	else {
		fout << 9;
	}

	
}
}