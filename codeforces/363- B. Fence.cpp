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
    int64_t n, k, s = 0, q = 0, x, indice = 0, mata = 0;
    vector<int64_t> v;
    cin >> n >> k;
    v.resize(n);
    for (auto& el : v) {
        cin >> el;
    }
    x = n - k;

    for (int i = indice; i < k; i++) {
        s += v[i];
    }
    q = s;
    while (x > 0) {
        s = s - v[indice] + v[indice + k];
        if (q > s) {
            q = s;
            mata = indice + 1;
        }
        indice++;
        x--;
    }

    cout << mata + 1;
}





