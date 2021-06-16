#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>
#include <fstream>
#include <set>


using namespace std;



int64_t suma(vector<vector<int64_t>>& b, int64_t n, int64_t p) {
    int64_t s = 0;
    for (int j = 0 ; j < n-p-1 ; j++) {
        s += b[p][j];
    }
    return s;
}

int main() {
    ifstream fin("matrice5.in");
    ofstream fout("matrice5.out");
    vector <vector <int64_t> > b;
    int64_t n, s = 0;
    fin >> n;
    b.resize(n);
    for (int i = 0; i < n; i++) {
        b[i].resize(n);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
       s += suma(b, n, i);
    }
    fout << s;
}





