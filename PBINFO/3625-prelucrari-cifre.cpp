#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
	int64_t n, m, a = 0, b = 0, c = 0, d = 0, e = 1, f = 0, rest = 0;
	vector <int64_t> v;
	cin >> n;
	while (n != 0) {
		rest = n % 10;
		v.push_back(rest);
		n /= 10;
	}
	for (int i = 0; i < v.size(); i++) {
		a += v[i] * v[i];
		if (v[i] % 2 == 1) {
			b += v[i];
		}
		if (v[i] % 3 == 0) {
			c += v[i];
		}
		if (v[i] > 5) {
			d++;
		}
		if (v[i] != 0) {
			e *= v[i];
		}
	}
	f = v[0] + v[v.size() - 1];
	cout << a << " " << b << " " << c << " " << d << " " << e << " " << f;
}