#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>
#include <fstream>
#include <set>

using namespace std;

int sum(int a[], int stanga, int dreapta) {
    if (stanga == dreapta)
        return a[stanga];
    else {
        int mijloc = (stanga + dreapta) / 2;
        return sum(a, stanga, mijloc) + sum(a, mijloc + 1, dreapta);
    }
}

int main() {
    int n, a[1001];
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    cout << sum(a, 1, n);
}