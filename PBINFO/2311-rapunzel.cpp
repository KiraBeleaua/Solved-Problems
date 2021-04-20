#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("rapunzel.in");
	ofstream fout("rapunzel.out");
	int64_t N,M1,M2,adunare,zile;
	fin >> N >> M1 >> M2;
	adunare = N / (M1 + M2);
	zile = N % (M1 + M2);
	if (zile != 0) {
		fout << adunare + 1;
	}
	else
	{
		fout << adunare;
	}
}