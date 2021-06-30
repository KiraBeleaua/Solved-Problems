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
    for (int i = 0; i < t; i++) {
        string s;
        vector <int64_t> v;
        int64_t solutie = 0, indice = 0;
        cin >> s;
        v.push_back(-1);
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == 'R') {
                v.push_back(j);
            }
        }
        v.push_back(s.size());
        int64_t maxim = -1;
        for (int j = 0; j < v.size() - 1; j++) {
            int64_t d = v[j+1] - v[j];
            if (maxim < d) {
                maxim = d;
            }
        }
        cout << maxim << "\n";
    }
}






