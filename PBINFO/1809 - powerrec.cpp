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




int64_t produs2 (int64_t a, int64_t b) {
    if (b == 0) {
        return 1;
    }
    return a * produs2(a, b-1);
}

int main() {
    int64_t a, b;
    cin >> a;
    cin >> b;
    cout << produs2(a, b);
}




