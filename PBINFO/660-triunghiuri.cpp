#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>

using namespace std;


int main()
{
    int64_t n, combinari = 0, a[100]{};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int k =i + 1; k <= n; k++) {
            for (int z = k + 1; z <= n; z++) {
                if (a[i] + a[z] > a[k] && a[i] + a[k] > a[z] && a[k] + a[z] > a[i]) {
                    combinari++;
                }
            }
        }
    
    }
    cout << combinari;
}