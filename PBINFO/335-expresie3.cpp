#include <iostream>

using namespace std;

int main()
{
    int64_t n, rezultat = 0;
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        int a = i;
        int b = i + 1;
        if (i % 2 == 1) {
            rezultat = rezultat + a * b;
        }
        else if (i % 2 == 0) {
            rezultat = rezultat - a * b;
        }

    }
    cout << "Rezultatul este " << rezultat;
}