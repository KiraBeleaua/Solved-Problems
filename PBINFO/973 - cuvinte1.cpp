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


bool isVowel(char c) {
    string v = "aeiouAEIOU";
    auto r = v.find(c);
    if (r != string::npos)
        return true;
    return false;
}

bool isConsonant(char c) {
    if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) && !isVowel(c))
        return true;
    return false;
}

bool isLetter(char c) {
    if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
        return true;
    return false;
}

bool isNumber(char c) {
    if (c >= '0' && c <= '9')
        return true;
    return false;
}
bool isNumber2(char c) {
    if (c >= '1' && c <= '9')
        return true;
    return false;
}




int main()
{
    string s;
    vector <int64_t> v, v2, spaces;
    getline(cin, s);
    int64_t coord = -1, cnt = -1, coord2 = 0, exista = -1;
    spaces.push_back(-1);
    for (int i = 0; i < s.size(); i++) {
        if (isVowel(s[i])) {
            v.push_back(1);
        }
        else if (s[i] == ' ') {
            v.push_back(2);
            spaces.push_back(i);
        }
        else
        {
            v.push_back(0);
        }
    }
    spaces.push_back(s.size());
    for (int i = 0; i < spaces.size()- 1; i++) {
        auto start = spaces[i];
        auto stop = spaces[i+1];
        if (stop == start + 1) {
            continue;
        }
        auto onlyVowels = true;
        for (int j = start + 1; j < stop; j++) {
            if (v[j] != 1) {
                onlyVowels = false;
                    break;
            }
        }
        if (onlyVowels == false) {
            continue;
        }
        for (int j = start + 1; j < stop; j++) {
            cout << s[j];
        }
        cout << "\n";
    }
    

}





