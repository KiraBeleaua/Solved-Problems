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






int main()
{
    int64_t n;
    string s;
    cin >> n;
    cin.get();
    getline(cin, s);
    int64_t lungime = s.size();
    for (int i = 0; i <= lungime - n; ++i) {
        for (int j = 0; j < lungime; ++j)
            if (j < i || j >= i + n)
                cout << s[j];
        cout << "\n";
    }
}







