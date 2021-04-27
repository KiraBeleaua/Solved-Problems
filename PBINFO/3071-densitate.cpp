#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	double a, b, c, d;
	cin >> a >> b >> c;
	d = b / (a + b - c);
	cout << d;
}
