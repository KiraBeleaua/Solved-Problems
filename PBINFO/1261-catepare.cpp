#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> v = {};
	while (true) {
		int a;
		cin >> a;
		if (a == 0)
			break;
		v.push_back(a);
	}

	int k = 0;
	for (int el : v) {
		if (el % 2 == 0) {
			k++;
		}
	}
	if (k == 0) {
		cout << "NU EXISTA";
	}
	else
		cout << k;
	
}
