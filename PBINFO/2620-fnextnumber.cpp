#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>
#include <fstream>
#include <set>


using namespace std;

int64_t NextNumber(int64_t n) {
    vector <int64_t> v;
    int64_t indice = -1, indice2 = -1, a = 0, numar = 0, beleaua = 1;
    while (n != 0) {
        int u = n % 2;
        v.push_back(u);
        n /= 2;
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i <= v.size() - 1; i++) {
        if (v[i] == 1) {
            indice = i;
        }
    }
    for (int i = indice - 1; i >= 0; i--) {
        if (v[i] == 0) {
            indice2 = i;
            break;
        }
    }
    if (indice != -1) {
        v[indice] = 0;
    }
    if (indice2 != -1) {
        v[indice2] = 1;
    }
    else if (indice2 == -1) {
        reverse(v.begin(), v.end());
        v.push_back(1);
        reverse(v.begin(), v.end());
        indice2 = 0;
        indice += 1;
    }
    for (int i = indice2 + 1; i < indice; i++) {
        v[i] = 0;
        a++;
    }
    while (a != 0) {
        v[v.size() - a] = 1;
        a--;
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i <= v.size() - 1; i++) {
        numar += v[i] * beleaua;
        beleaua *= 2;
    }
    return numar;
}