#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("maxim.in");
	ofstream fout("maxim.out");
	int64_t a, b;
	fin >> a >> b;
	a = max(a, b);
		fout << a;
}

