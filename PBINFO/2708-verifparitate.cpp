#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>
#include <fstream>
#include <set>

using namespace std;

int main() {
	int64_t n, m;
	cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        if ((m & 1) == 1)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
}



