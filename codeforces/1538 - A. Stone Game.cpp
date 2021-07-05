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
		int64_t maxi = -1000000000, mini = 1000000000;
		vector <int64_t> v;
		int64_t result1 = 1000000000;
		int64_t result2 = 1000000000;
		int64_t result3 = 1000000000;
		cin >> n;
		v.resize(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		for (int i = 0; i < n; i++) {
			if (v[i] > maxi) {
				maxi = v[i];
				coordmax = i;
			}
			if (v[i] < mini) {
				mini = v[i];
				coordmin = i;
			}
		}
		int64_t cnt = 0;
		int64_t cnt2 = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] == maxi) {
				cnt++;
			}
			if (v[i] == mini) {
				cnt++;
			}
			cnt2++;
			if (cnt == 2) {
				result1 = cnt2;
				break;
			}
		}
		int64_t cnt3 = 0;
		int64_t cnt4 = 0;
		for (int i = n - 1; n >= 0; i--) {
			if (v[i] == maxi) {
				cnt3++;
			}
			if (v[i] == mini) {
				cnt3++;
			}
			cnt4++;
			if (cnt3 == 2) {
				result2 = cnt4;
				break;
			}
		}
		int64_t cnt5 = 0;
		int64_t cnt6 = 0;
		cnt5 = max(coordmax, coordmin);
		cnt6 = min(coordmax, coordmin);
		cnt5 = v.size() - cnt5;
		cnt6 += cnt5 + 1;
		
		result3 = cnt6;

		
		int64_t result;
		result = min(result1, result2);
		if (result >= result3) {
			cout << result3;
		}
		else if (result < result3) {
			cout << result;
		}
		cout << "\n";
	}
}









