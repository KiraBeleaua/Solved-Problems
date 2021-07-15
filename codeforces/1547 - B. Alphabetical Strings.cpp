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
#include <bitset>


#define int64 int64_t

using namespace std;



int main()
{
	int64_t t, coord;
	vector <vector <char> > b;
	cin >> t;
	for (int z = 0; z < t; z++) {
		string s;
		vector <int64_t> v;
		cin >> s;
		if (s.size() == 1 && s[0] == 'a') {
			cout << "YES" << "\n";
			continue;
		}
		v.resize(27);
		int64_t frana = 1;
		int64_t small = 1000000;
		int64_t smallcoord = -1;
		int64_t cv = 999;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] - '`' < small) {
				small = s[i] - '`';
				smallcoord = i;
			}
		}

		if (smallcoord == 0) {
			for (int i = smallcoord; i < s.size() - 1; i++) {
				if (s[i] > s[i + 1]) {
					cv = 0;
					cout << "NO" << "\n";
					break;
				}
			}
		}
		if (cv == 0) {
			continue;
		}
		if (smallcoord == s.size() - 1) {
			for (int i = smallcoord; i > 0; i--) {
				if (s[i] > s[i - 1]) {
					cout << "NO" << "\n";
					cv = 0;
					break;
				}
			}
		}
		if (cv == 0) {
			continue;
		}
		for (int i = smallcoord; i > 0; i--) {
			if (s[i] > s[i - 1]) {
				cout << "NO" << "\n";
				cv = 0;
				break;
			}
		}
		if (cv == 0) {
			continue;
		}
		for (int i = smallcoord; i < s.size() - 1; i++) {
			if (s[i] > s[i + 1]) {
				cv = 0;
				cout << "NO" << "\n";
				break;
			}
		}
		if (cv == 0) {
			continue;
		}

		for (int i = 0; i < s.size(); i++) {
			v[s[i] - '`'] = 1;
			if (s[i] < small) {
				small = s[i];
				smallcoord = i;
			}
		}

		for (int i = 1; i < v.size(); i++) {
			if (v[i] == 1) {
				coord = 1;
				break;
			}
		}
		for (int i = coord; i < s.size() + 1; i++) {
			if (v[i] != 1) {
				frana = 0;
			}
		}
		if (frana == 1) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
}









