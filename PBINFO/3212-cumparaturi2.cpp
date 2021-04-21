#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	int64_t s, d, r, m;
	cin >> s >> d >> r >> m;
	if (s >= d) {
		cout << "drona";
	}
	else if (s < d && s >= r)
		cout << "robot";
	else if (d > s && r > s && s >= m)
		cout << "masina";
	else
	{
		cout << "nimic";
	}
}