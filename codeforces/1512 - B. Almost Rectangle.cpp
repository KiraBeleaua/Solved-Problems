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


using namespace std;




int main() {
	int64_t n, x = 1, t;
	vector <string> b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		b.resize(n);
		for (int i = 0; i < n; i++) {
			b[i].resize(n);
		}
		int64_t coord1 = 0, coord2 = 0, coord3 = 0, coord4 = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> b[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (b[i][j] == '*') {
					if (coord1 == 0 && coord2 == 0) {
						coord1 = i;
						coord2 = j;
					}
					else {
						coord3 = i;
						coord4 = j;
					}
				}
			}
		}
		if (coord2 != coord4) {
			b[coord1][coord4] = '*';
			b[coord3][coord2] = '*';
		}
		else if (coord2 == coord4) {
			coord2--;
			coord4--;
			if (coord2 == -1 || coord4 == -1) {
				coord2 = 1;
				coord4 = 1;
			}
		}
		if (coord1 == coord3) {
			coord1++;
			coord3++;
			if (coord1 == n) {
				coord1 = coord1 - 2;
				coord3 = coord3 - 2;
			}
			b[coord1][coord4] = '*';
			b[coord3][coord2] = '*';
		}

		b[coord1][coord4] = '*';
		b[coord3][coord2] = '*';

		

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << b[i][j];
			}
			cout << "\n";
		}
	}
}





