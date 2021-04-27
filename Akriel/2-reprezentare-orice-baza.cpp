#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, c = 0, o = 0, b;
	vector <int> v;
	cin >> n;
	cin >> b;
	while (n != 0) {
		int u = n % b;
		v.push_back(u);
		n /= b;
	}
	for (int i = v.size() - 1; i >= 0; i--)
		cout << v[i];
}

