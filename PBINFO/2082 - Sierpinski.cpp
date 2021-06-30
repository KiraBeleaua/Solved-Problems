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
#include <bitset>

using namespace std;








void sierpinski(vector <bitset <750>> &b, int64_t it, int64_t x, int64_t y) {
    if (it <= 0) {
        return;
    }
    int64_t size = b.size();
    int64_t latura = pow(3, it);
    int64_t sublatura = latura / 3;
    int64_t stanga = x - sublatura / 2;
    int64_t dreapta = x + sublatura / 2;
    int64_t sus = y - sublatura / 2;
    int64_t jos = y + sublatura / 2;
    for (int i = sus; i <= jos; i++) {
        for (int j = stanga; j <= dreapta; j++) {
            if (i < 0 || i >= size || j < 0 || j >= size) {
                continue;
            }
            b[i][j] = 1;
        }
    }
    int64_t dx[] = { -1, 0, 1, 1, 1, 0,-1,-1 };
    int64_t dy[] = { -1,-1,-1, 0, 1, 1, 1, 0 };

    for (int i = 0; i < 8; i++) {
        int64_t xnou = x + dx[i] * sublatura;
        int64_t ynou = y + dy[i] * sublatura;
        sierpinski(b, it - 1, xnou, ynou);
    }

}






int main() {
    ifstream fin("sierpinski.in");
    ofstream fout("sierpinski.out");
    //vector <vector <int64_t> > b;
    vector <bitset <750>> b;
    int64_t n, x, z, y;
    fin >> n;
    x = 3;
    z = pow(x, n);
    b.resize(z);
    int64_t mijloc = z / 2;

    sierpinski(b, n, mijloc, mijloc);

    for (int i = 0; i < z; i++) {
        for (int j = 0; j < z; j++) {
            fout << b[i][j] << " ";
        }
        fout << "\n";
    }
}




