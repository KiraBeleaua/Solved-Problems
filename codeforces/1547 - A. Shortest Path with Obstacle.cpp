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


#define int64 int64_t

using namespace std;



int main()
{
	int64_t t, xa, ya, xb, yb, xf, yf, result = 0, cnt = 0;
	vector <vector <char> > b;
	cin >> t;
	for (int z = 0; z < t; z++) {
		cin >> xa >> ya >> xb >> yb >> xf >> yf;
		result = 0;
		if (xa == xf && xb == xf) {
			if (yb > yf && yf > ya)
				result += 2;
			if (ya > yf && yf > yb)
				result += 2;
		}
		if (ya == yf && yb == yf) {
			if (xb > xf && xf > xa)
				result += 2;
			if (xa > xf && xf > xb)
				result += 2;
		}
		result += abs(xa - xb) + abs(ya - yb);

		cout << result << "\n";
	}
}










