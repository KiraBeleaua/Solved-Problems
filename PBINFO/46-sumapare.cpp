#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int64_t n, s, r, l, w;
    cin >> n;
    r = 2 * n;
    l = 2;
    w = 0;
    for (int i = l; i <= r; i = i + 2) {
        w = w + i;
    }
    cout << "Suma este " << w;
}