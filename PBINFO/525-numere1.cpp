#include <vector>
#include <iostream>
using namespace std;

int f[1000];

int main() {
    int n;

    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++){
        int el;
        cin >> el;
        if (el > 999)
            continue;
        f[el]++;
    }

    int ans[2] = {-1, -1};
    int k = 0;
    for (int i = 999; i >= 100; i--)
    {
        if (f[i] == 0)
        {
            ans[k] = i;
            k++;

            if (k == 2)
            {
                break;
            }
        }
    }
    if (k == 2)
    {
        cout << ans[1] << " " << ans[0];
    }
    else
    {
        cout << "NU EXISTA";
    }
    
}