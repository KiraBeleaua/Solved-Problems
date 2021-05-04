#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>

using namespace std;

void printVector(vector<int64_t> v) {
    for (auto& el : v) {
        cout << el << " ";
    }
    cout << "\n";
}

int maximAdi(vector<int64_t> v) {
    int64_t maxim = v[0], indice = 0;
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] < v[i + 1] && maxim < v[i + 1]) {
            maxim = v[i + 1];
            indice = i + 1;

        }
        else if (v[i] > v[i + 1] && maxim < v[i]) {
            maxim = v[i];
            indice = i;
        }
    }

    return maxim;
}

int maxim(vector<int64_t> v) {
    int64_t m = v[0];
    for (auto el : v) {
        m = max(el, m);
    }
    return m;
}

vector<int64_t> generateRandomVector(int64_t n, int64_t left, int64_t right) {
    srand(time(NULL));

    int64_t space = right - left;
    vector <int64_t> v;
    for (int i = 0; i < n; i++) {
        int64_t el = rand() % space + left;
        v.push_back(el);
    }
    return v;
}

int64_t maxVector(vector<int64_t> a) {
    int64_t m = a[0];
    for (int i = 1; i < a.size(); i++) {
        m = max(a[i], m);
    }
    return m;
}

int64_t maximIndiceVector(vector<int64_t> a) {
    int64_t m = a[0];
    int indice = 0;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] > m) {
            m = a[i];
            indice = i;
        }
    }
    return indice;
}

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

void rezolvaProblema() {
    int64_t n, n2, t, primaSuma = 0, suma2 = 0;
    vector <int64_t> v, w;
    cin >> n;
    v.resize(n);
    for (auto& el : v) {
        cin >> el;
    }
    cin >> n2;
    w.resize(n2);
    for (auto& el : w) {
        cin >> el;
    }
    int64_t suma = 0, indice = 0;

    for (int64_t h = 0; h < n; h++) {
        primaSuma += v[h];
    }
    for (int64_t q = 0; q < n2; q++) {
        suma2 += w[q];
    }
    if (primaSuma != suma2) {
        cout << "0\n";
        return;
    }


    for (int64_t j = 0; j < n2; j++) {
        for (int64_t i = indice; i < n; i++) {
            if (w[j] == suma) {
                suma = 0;
                break;
            }
            else if (w[j] > suma) {
                suma += v[i];
                indice++;
            }
            else if (w[j] < suma) {
                cout << "0" << "\n";
                return;
            }
        }
    }
    cout << "1" << "\n";
}

int main()
{
    int64_t n, n2, t;
    vector <int64_t> v, w;
    cin >> t;
    for (int64_t z = 0; z < t; z++) {
        rezolvaProblema();
    }
}
