#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int64_t durataAn, durataZi, numarOre, catZileAreUnAn, mosCraciun, ren, altren, renita;
	cin >> durataAn >> durataZi >> numarOre;
	catZileAreUnAn = durataAn * durataZi;
	mosCraciun = numarOre / catZileAreUnAn;
	ren = numarOre % catZileAreUnAn;
	altren = ren / durataZi;
	renita = ren % durataZi;
	cout << mosCraciun << endl;
	cout << altren << endl;
	cout << renita << endl;
}