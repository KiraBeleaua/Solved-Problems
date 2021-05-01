#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int64_t n, a;
    vector <int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    int64_t minim = v[0];
    int64_t maxim = v[1];

    for (int i = 0; i < n - 1; i++) {
        if (v[i] < v[i + 1]) {
            if (v[i] <= minim) {
                minim = v[i];
            }
            if (v[i + 1] >= maxim) {
                maxim = v[i + 1];
            }
        }
        else {
            if (v[i] >= maxim) {
                maxim = v[i];
            }
            if (v[i + 1] <= minim) {
                minim = v[i + 1];
            }
        }
    }
    cout << minim + maxim;
}