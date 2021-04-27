#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    ifstream fin("calcul3.in");
    ofstream fout("calcul3.out");

    string s;
    fin >> s;
    int rezultat = 0;
    int64_t termen1, termen2, termenInitial;
    for (int i = 0; i < s.size(); i++) {
        int c = s[i];

        if (c == '1') {
            termen1 = 1;
        }
        else if (c == '2') {
            termen1 = 2;
        }
        else if (c == '3') {
            termen1 = 3;
        }
        else if (c == '4') {
            termen1 = 4;
        }
        else if (c == '5') {
            termen1 = 5;
        }
        else if (c == '6') {
            termen1 = 6;
        }
        else if (c == '7') {
            termen1 = 7;
        }
        else if (c == '8') {
            termen1 = 8;
        }
        else if (c == '9') {
            termen1 = 9;
        }
        if (c == '+') {
            i++;
            rezultat += s[i] - '0';
        }
        if (c == '-' || c == '–') {
            i++;
            rezultat -= (s[i] - '0');
        }
        if (i == 0) {
            termenInitial = termen1;
            rezultat += termenInitial;
        }
        if (c == '=') {
            break;
        }
    }
    fout << s << rezultat;

    return 0;
}
