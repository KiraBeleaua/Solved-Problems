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








bool exista_impar(int a[], int st, int dr) {
    if (st == dr)
        return a[st] % 2 == 1;
    else {
        int mij = (st + dr) / 2;
        return exista_impar(a, st, mij) || exista_impar(a, mij + 1, dr);
    }
}


int main()
{
    int n, a[1001];
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    if (exista_impar(a, 1, n))
        cout << "DA";
    else
        cout << "NU";
    return 0;
}





