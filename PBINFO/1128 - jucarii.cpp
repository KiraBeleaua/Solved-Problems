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
	int64_t n, k, a = 1;
	int64_t m = 224737;
	cin >> k >> n;
	for (int i = n; i >= n - k + 1; i--) {
		a *= i;
		a %= m;
	}
	cout << a;
}






