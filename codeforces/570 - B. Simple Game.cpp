#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>
#include <fstream>
#include <set>

using namespace std;

void afismat(vector<vector<int64_t>> &b) {
    int64_t n = b.size();
    int64_t m = b[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << b[i][j] << ' ';
        }
        cout << "\n";
    }
    cout << "\n";
}



int main() {
    int64_t n, m, a, c;
    cin >> n >> m;
    if (m <= n / 2) {
        a = m + 1;
    }
    else if (m > n / 2) {
        a = m - 1;
    }
    if (n == 1) {
        a = 1;
    }
    cout << a;
}






