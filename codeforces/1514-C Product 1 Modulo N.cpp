#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>
#include <fstream>
#include <set>


using namespace std;

int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}

int main() {
	int64_t n, m = 1;
	//vector <vector <int64_t> > b;
	vector<int64_t> v;
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (gcd(n, i) == 1) v.push_back(i);
	}
	for (int i = 0; i < v.size(); i++) {
		m = (m * v[i] % n);
	}
	if (m == 1) {
		cout << v.size() << "\n";
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
	}
	else {
		cout << v.size()-1 << "\n";
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == m) {
				continue;
			}
			cout << v[i] << " ";
		}
	}
}