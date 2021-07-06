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
	int64_t t, n, l, r;
	vector <int64_t> v;
	cin >> t;
	for (int z = 0; z < t; z++) {
		cin >> n >> l >> r;
		v.resize(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		int64_t rez = 0;
		for (int i = 0; i < n; i++) {
			int64_t range1, range2;
			range1 = l - v[i];
			range2 = r - v[i];
			int64_t coord1, coord2;
 
			coord1 = lower_bound(v.begin(), v.end(), range1) - v.begin();
			coord2 = upper_bound(v.begin(), v.end(), range2) - v.begin();
			rez += coord2 - coord1;
			if (l <= 2 * v[i] && 2 * v[i] <= r)
				rez--;
		}
		cout << rez / 2 << "\n";
	}
 
}