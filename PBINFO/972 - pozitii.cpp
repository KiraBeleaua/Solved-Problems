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
    string v = "aeiou";
    auto r = v.find(c);
    if (r != string::npos)
        return true;
    return false;
}

bool isConsonant(char c) {
    if (c >= 'a' && c <= 'z' && !isVowel(c))
        return true;
    return false;
}






int main()
{
        string s;
        getline(cin,s);
        int64_t solutie = 0;
        for (int i = 1; i < s.size() - 2; i++) {
            if (isConsonant(s[i - 1]) && isVowel(s[i]) && isConsonant(s[i + 1])) {
                solutie++;
           }
        }
        cout << solutie;
}






