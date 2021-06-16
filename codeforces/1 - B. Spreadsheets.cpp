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


using namespace std;




int main() {
	int64_t R, C, n, a, x = 0, z = 0, number, idgaf = 0, cnt = 0, cnt2 = 0, suma = 0, l = 0, something = 0;
	string s, ss;
	vector<int64_t> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		x = 0;
		v.clear();
		l = 0;
		z = 0;
		suma = 0;
		cnt = 0;
		cnt2 = 0;
		idgaf = 0;
		something = 0;
		for (int j = 1; j < s.size() - 1; j++) {
			if (s[j - 1] <= '9' && s[j - 1] >= '0' && s[j] == 'C' && s[j + 1] <= '9' && s[j + 1] >= '0') {
				x = 1;
				z = j + 1;
			}
		}
		string r, c;
		if (x > 0) {
			for (int j = 1; j < z - 1; j++) {
				r.push_back(s[j]);
			}
			for (int j = z; j < s.size(); j++) {
				c.push_back(s[j]);
			}
			idgaf = stoi(c);
			while (idgaf > 25) {
				cnt2 = idgaf % 26;
				if (cnt2 != 0) {
					v.push_back(cnt2);
				}
				else if (cnt2 == 0) {
					v.push_back(26);
					idgaf -= 1;
				}
				idgaf /= 26;
			}
			v.push_back(idgaf);

			for (int i = v.size() - 1; i >= 0; i--) {
				if ((char)('A' + v[i] - 1) != '@') {
					cout << (char)('A' + v[i] - 1);
				}
			}
			cout << r << "\n";
		}
		if (x == 0) {
			suma = 0;
				cout << 'R';
				for (int i = 1; i < s.size(); i++) {
					if (s[i] <= '9' && s[i] >= '0') {
						cout << s[i];
					}
				}
			cout << 'C';
			for (int i = 0; i < s.size() - 1; i++) {
				if (s[i] >= 'A' && s[i] <= 'Z') {
					l++;
				}
				if (s[i] <= '9' && s[i] >= '0') {
					break;
				}

			}
			while (l > 0) {
				int beleaua = l;
				for (int i = 0; i < beleaua; i++) {
					suma += pow(26, l - 1) * (s[i] - 'A' + 1);
					l--;
				}
			}
			cout << suma << "\n";
		}
	}
}





