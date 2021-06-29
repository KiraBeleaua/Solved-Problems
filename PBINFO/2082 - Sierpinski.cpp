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
#include <conio.h>

using namespace std;





int64_t produs2(int64_t a, int64_t b) {
	if (b == 0) {
		return 1;
	}
	return a * produs2(a, b - 1);
}

void display(vector <vector <int64_t> >& b) {
	auto z = b.size();
	for (int i = 0; i < z; i++) {
		for (int j = 0; j < z; j++) {
			if (b[i][j] == 0) {
				cout << "  ";
			}
			else {
				cout << b[i][j] << " ";
			}
		}
		cout << "\n";
	}
	_getch();
	system("CLS");
}


void sierpinski(vector <vector <int64_t> >& b, int64_t it, int64_t x, int64_t y) {
	if (it <= 0) {
		return;
	}
	int64_t latura = pow(3, it);
	int64_t sublatura = latura / 3;
	int64_t stanga = x - sublatura / 2;
	int64_t dreapta = x + sublatura / 2;
	int64_t sus = y - sublatura / 2;
	int64_t jos = y + sublatura / 2;
	for (int i = sus; i <= jos; i++) {
		for (int j = stanga; j <= dreapta; j++) {
			b[i][j] = 1;
		}
	}
	int64_t dx[] = { -1, 0, 1, 1, 1, 0,-1,-1 };
	int64_t dy[] = { -1,-1,-1, 0, 1, 1, 1, 0 };
	
	for (int i = 0; i < 8; i++) {
		int64_t xnou = x + dx[i] * sublatura;
		int64_t ynou = y + dy[i] * sublatura;
		sierpinski(b, it - 1, xnou, ynou);
	}

}






int main() {
	ifstream fin("sierpinski.in");
	ofstream fout("sierpinski.out");
	vector <vector <int64_t> > b;
	int64_t n, x, z, y;
	cin >> n;
	x = 3;
	z = pow(x, n);
	b.resize(z);
	for (int i = 0; i < z; i++) {
		b[i].resize(z);
	}
	int64_t mijloc = z / 2;

	sierpinski(b, n, mijloc, mijloc);

	for (int i = 0; i < z; i++) {
		for (int j = 0; j < z; j++) {
			if (b[i][j] == 0) {
				cout << "  ";
			}
			else {
				cout << b[i][j] << " ";
			}
		}
		cout << "\n";
	}
}





