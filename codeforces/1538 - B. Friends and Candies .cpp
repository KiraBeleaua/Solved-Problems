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


using namespace std;




int main()
{
	int64_t t, n, coordmax, coordmin;
	cin >> t;
	for (int z = 0; z < t; z++) {
		int64_t medie = 0, result = 0;
		vector <int64_t> v;
		cin >> n;
		v.resize(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			medie += v[i];
		}
		if (n == 1) {
			cout << 0;
			cout << "\n";
			continue;
		}
		if (medie % n != 0) {
			cout << -1;
			cout << "\n";
			continue;
		}
		medie /= n;
		for (int i = 0; i < n; i++) {
			if (v[i] > medie) {
				result++;
			}
		}
		cout << result;
		cout << "\n";
	}
}








