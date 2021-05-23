#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>
#include <fstream>
#include <set>

//#include "utilFunc.h"

using namespace std;

void citire(int& n, int v[100]) {
    ifstream fin("halfsort1.in");
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> v[i];
    }
}

void afisare(int n, int v[100]) {
    ofstream fout("halfsort1.out");
    for (int i = 0; i < n; i++) {
        fout << v[i] << " ";
    }
}

void merge(vector<int64_t>& v, int low, int high, int mid)
{
    /*cout << low << " " << mid << " " << high;
    cout << "\n";
    for (int i = low; i <= high; i++){
        cout << v[i] << " ";

}
    cout << "->";*/
    int i, j;
    vector<int64_t> c;
    i = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (v[i] < v[j])
        {
            c.push_back(v[i]);
            i++;
        }
        else
        {
            c.push_back(v[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        c.push_back(v[i]);
        i++;
    }
    while (j <= high)
    {
        c.push_back(v[j]);
        j++;
    }
    /*for (i = low; i < k; i++)
    {
        v[i] = c[i-low];
    }*/
    for (i = 0; i < c.size(); i++) {
        v[low + i] = c[i];
      //  cout << v[low + i] << " ";
    }
    //cout << "\n";
}

void mergeSort(vector<int64_t> &v, int low, int high) {
    if (low < high) {
        int mid;
        mid = (low + high) / 2;

        mergeSort(v, low, mid);
        mergeSort(v, mid + 1, high);
        merge(v, low, high, mid);
    }
    return;
}

int main() {
    ifstream fin("algsort.in");
    ofstream fout("algsort.out");
    /*int64_t n, low, mid, high;
    vector<int64_t> v;
    v.resize(n);
    for (auto& el : v) {
        cin >> el;
    }*/
    vector<int64_t> v;
    int64_t n;
    fin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        fin >> v[i];
   }
    int low = 0;
    int high = v.size() - 1;

    mergeSort(v, low, high);

    for (int i = 0; i < v.size(); i++)
        fout << v[i] << " ";

}




