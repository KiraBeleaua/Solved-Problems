#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    uint64_t n, indice1, indice2;
    cin >> n;
    uint64_t bit = 1;
    for (int i = 0; i < 64; i++) {
        if ((bit & n) != 0) {
            indice1 = i;
            break;
        }
        bit = bit << 1;
    }
    bit = 1ull << 63;
    for (int i = 63; i >= 0; i--) {
        if ((bit & n) != 0) {
            indice2 = i;
            break;
        }
        bit = bit >> 1;
    }
    cout << indice2 - indice1 + 1;
}
