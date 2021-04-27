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
	int k = 0;
	int i = 1;
	for (i = 1; i < v.size(); i++) {
		if ( k < v[i]) {
		k = v[i] ;
	}
	}
	if (k == 0) {
		cout << "NU EXISTA";
	}
	else cout << k;
}


