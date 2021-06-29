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


using namespace std;




int main()
{
    int64_t t;
    cin >> t;
    for (int j = 0; j < t; j++) {
        vector <int64_t> v;
        int64_t n, cnt1 = 0, cnt2 = 0;
        cin >> n;
        v.resize(n);
        for (auto& el : v) {
            cin >> el;
        }
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 1) {
                cnt1++;
            }
            else if (v[i] % 2 == 0) {
                cnt2++;
            }
            if (cnt1 > 0 && cnt2 > 0) {
                cout << "\n" << "NO";
                break;
            }
        }
        if (cnt1 == 0 || cnt2 == 0) {
            cout << "\n" << "YES";
        }
    }
}





