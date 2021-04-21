#include <iostream>

using namespace std;

int main() {
    int n, x, y, v;
    cin >> n >> y >> x >> v;
    x--; y--;
    cout << n * y + x + 1 << " ";

    v--;
    int xv = v % n;
    int yv = v / n;
    cout << yv + 1 << " " << xv + 1;
}