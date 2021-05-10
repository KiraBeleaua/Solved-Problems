#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>
#include <fstream>
#include <set>
using namespace std;
ifstream fin("numere8.in");
ofstream fout("numere8.out");
int c[10000];
int main()
{
    int x;
    while(fin >> x)
        if(x <= 9999)
            c[x] = 1;
    for(int i = 9999; i >= 1; --i)
        if(c[i] == 0)
            fout << i << ' ';
}