#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int64_t s,c,n,z,w;
	cin >> s >> c >> n;
	z = s % c;
	w = s % n;
	if (z == 0 && w == 0) {
		cout << "CN";
	}
	else if (z == 0 && w != 0) {
		cout << "C";
	}
	else if (z != 0 && w == 0) {
		cout << "N";
	}
	else if (z != 0 && w != 0 ) {
		cout << "nimic";
	}
}