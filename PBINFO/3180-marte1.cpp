#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int64_t euro, dolari, lira, numarEuro, numarDolari, numarLira, banetTurbo;
	cin >> euro >> dolari >> lira >> numarEuro >> numarDolari >> numarLira;
	banetTurbo = numarEuro * euro + numarDolari * dolari + numarLira * lira;
	cout << banetTurbo;
}