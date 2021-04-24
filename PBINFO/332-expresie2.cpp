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
    s = 0;
    for (int i = 1; i <= n; i++) {
        w = i * (i + 1);
        s = s + w;
    }
    cout << "Rezultatul este " << s;
}

