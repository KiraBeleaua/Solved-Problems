#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int64_t a, b, r;
    char s;
	cin >> a >> b >> s;
    if (s == '+')
		cout << a + b;
    if (s == '-')
        cout << max(a,b) - min(a,b);
    if (s == '/')
		cout << max(a,b) / min(a,b);
    if (s == '*')
		cout << a * b;
	return 0;
}
