#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>
#include <fstream>
#include <set>
#include <string>
#include <cstdlib>
#include <sstream>
#include <bitset>



using namespace std;



int main()
{
	int64_t t, n = 9;
	vector <vector <char> > b;
	cin >> t;
	b.resize(n);
	for (int i = 0; i < n; i++) {
		b[i].resize(n);
	}
	for (int z = 0; z < t; z++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> b[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0 & j == 0)
					b[i][j] = b[i][j+1];
				if (i == 1 & j == 7)
					b[i][j] = b[i][j + 1];
				if (i == 2 & j == 3)
					b[i][j] = b[i][j + 1];
				if (i == 3 & j == 2)
					b[i][j] = b[i][j + 1];
				if (i == 4 & j == 6)
					b[i][j] = b[i][j + 1];
				if (i == 5 & j == 4)
					b[i][j] = b[i][j + 1];
				if (i == 6 & j == 5)
					b[i][j] = b[i][j + 1];
				if (i == 7 & j == 1)
					b[i][j] = b[i][j + 1];
				if (i == 8 & j == 8)
					b[i][j] = b[i][j - 1];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << b[i][j];
			}
			cout << "\n";
		}
	}
}









