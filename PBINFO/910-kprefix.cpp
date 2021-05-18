#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>
#include <fstream>
#include <set>


using namespace std;

void prefix(int n, int k, int& x) {
	vector <int> v;
	int z = n;
	int c = 0;
	int p = 0;
	int something = 1;
	while (z != 0) {
		p = z % 10;
		c++;
		z /= 10;
		v.resize(c);
		v.push_back(p);
	}
	x = v[v.size() - something];
	for (int i = k - 1; i > 0; i--) {
		something++;
		x = x * 10 + v[v.size() - something];
	}
}