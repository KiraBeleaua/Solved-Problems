#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	double v, d, vitezaInK, b, timp, vitezaMetri;
	cin >> vitezaInK >> d;
	vitezaMetri = vitezaInK * 1000 / 60; // viteza metrii/minut
	timp = d / vitezaMetri;
	double virgula = timp - (int)timp;
	cout << (int)(timp)+(virgula > 1e-6);
}