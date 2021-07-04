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
#include <sstream>


using namespace std;



int64_t Euclid(int64_t nr1, int64_t nr2) {
    int64_t rest;
    while (nr2 != 0) {
        rest = nr1 % nr2;
        nr1 = nr2;
        nr2 = rest;
    }
    return nr1;
}



int main()
{
    double a, b, c, d, m, n, max1 = 0, numerefinale, numerefinale2;
    cin >> a >> b >> c >> d;
    m = a / b;
    n = c / d;
    max1 = max(m, n);
    if (max1 == m) {
        numerefinale = a;
        numerefinale2 = b;
    }
    if (max1 == n) {
        numerefinale = c;
        numerefinale2 = d;
    }
    int rezultat = Euclid(numerefinale, numerefinale2);
    numerefinale /= rezultat;
    numerefinale2 /= rezultat;
        cout << numerefinale << " " << numerefinale2;
}





