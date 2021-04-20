#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("canguri.in");
	ofstream fout("canguri.out");
	int64_t c1,c2,c3,nCangur,nCangur2,nCangur3,z,x,s,k,j,l;
	const int64_t pista = 800;
	fin >> nCangur >> c1 >> nCangur2 >> c2 >> nCangur3 >> c3;
	z = pista / c1 + (pista % c1 != 0);
	x = pista / c2 + (pista % c2 != 0);
	s = pista / c3 + (pista % c3 != 0);
	if (z < x && z < s) {
		fout << nCangur << "\n" << z;
	}
	else if (x < z && x < s) {
		fout << nCangur2 << "\n" << x;
	}
	else if (s < x && s < z) {
		fout << nCangur3 << "\n" << s;
	}
}
    
