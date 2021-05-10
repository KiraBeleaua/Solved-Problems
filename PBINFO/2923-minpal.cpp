#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int64_t> v;
    int n;
    cin >> n;
    v.resize(n);
    for (auto& el : v)
        cin >> el;

    int64_t i = 0;
    int64_t j = n - 1;

    int64_t ans = 0;
    while(i <= j)
    {
        if (v[i] == v[j])
        {
            i++;
            j--;
        }
        else if (v[i] < v[j])
        {
            v[i+1] += v[i];
            i++;
            ans++;
        }
        else if (v[j] < v[i])
        {
            v[j-1] += v[j];
            j--;
            ans++;
        }
    }
    cout << ans;
}