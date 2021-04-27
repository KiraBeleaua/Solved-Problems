#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> v = {};
	int a;
	while (true) {
		cin >> a;
		if (a == 0)
			break;
		v.push_back(a);
	}
	int k = 1000000;
	int i = 0;
	for (i = 0; i < v.size(); i++) {
		if ( k > v[i] && v[i] > 0) {
		k = v[i] ;
	}
	}
	if (k == 1000000) {
		cout << "NU EXISTA";
	}
	else cout << k;
}


