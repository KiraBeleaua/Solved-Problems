#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i;
    for (i = 1;n >= i; i++) {
        cout << i << " " ;
    }
    cout << "\n";
    for (i = n; i > 0; i--) {
        cout << i << " ";
    }

}