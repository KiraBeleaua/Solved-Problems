#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>
#include <fstream>
#include <set>

using namespace std;

void citire(int& n, int v[100]) {
    ifstream fin("halfsort1.in");
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> v[i];
    }
}

void sortare(int n, int v[100]) {
        for (int i = 0; i < n/2; i++) 
            for (int j = i + 1; j < n / 2; j++) 
            if (v[i] > v[j])
              swap (v[i], v[j]);
            
        for (int i = n / 2; i < n ; i++) 
            for (int j = i + 1; j < n ; j++) 
            if (v[i] < v[j])
              swap (v[i], v[j]);
}
            
void afisare(int n, int v[100]) {
    ofstream fout("halfsort1.out");
    for (int i = 0; i < n; i++) {
        fout << v[i] << " ";
    }
}

int main() {
    int v[100];
    int n;
    citire(n, v);
    sortare(n, v);
    afisare(n, v);
}

