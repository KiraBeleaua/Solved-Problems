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
    for (int j = 0; j < n; j++) {
        s += b[p][j];
    }
    return s;
}

int main() {
    ifstream fin("matrice4.in");
    ofstream fout("matrice4.out");
    vector <vector <int64_t> > b;
    int64_t n;
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
        int64_t s = suma(b, n, i);
        if (s % 2 == 0) {
            fout << i + 1 << " ";
        }
    }

}





