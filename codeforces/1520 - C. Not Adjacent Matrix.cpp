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
	vector <vector <int64_t> > b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		b.resize(n);
		for (int i = 0; i < n; i++) {
			b[i].resize(n);
		}
		x = 1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				b[i][j] = x;
				x = x + 2;
				if (x > n * n) {
					x = 2;
				}
			}
		}
		if (n != 2) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << b[i][j] << " ";
				}
				cout << "\n";
			}
		}
		else {
			cout << -1;
			cout << "\n";
		}
	}
	
}





