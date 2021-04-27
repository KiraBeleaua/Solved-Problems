#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	ifstream fin("produsmaxim.in");
	ofstream fout("produsmaxim.out");
	int n, a, b, c, p, y, x;
	while (fin >> x) {
		int n = x;
		if (n % 3 == 0) {
			p = n / 3;
			a = b = c = p;
		}
		else if (n % 3 == 1) {
			p = n / 3;
			a = b = p;
			c = p + 1;
		}
		else if (n % 3 == 2) {
			p = n / 3;
			a = p;
			c = b = p + 1;
		}
		char buffer[1000];
		sprintf_s(buffer, "%d %d %d %d\n", n, a, b, c);
		fout << buffer;
	}
	fin.close();
	fout.close();

	return 0;
}