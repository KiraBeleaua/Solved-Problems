#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <bitset>

using namespace std;

int main() {
    int64_t n, c = 0, o = 0;
    cin >> n >> c;
    if (__builtin_popcount(n) > __builtin_popcount(c)) {
        cout << n;
    }
    else if (__builtin_popcount(n) < __builtin_popcount(c)) {
        cout << c;
    }
    else {
        cout << min(n, c);
    }
}