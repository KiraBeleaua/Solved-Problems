#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int64_t n,l,r,s;
    cin >> n;
    r = n;
    l = 1;
    s = 0;
    for (int i = l; n >= i; i++) {
        s = s + i;
    }
    cout << s << " ";
}