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


bool isNumber(char c) {
	if (c >= '0' && c <= '9')
		return true;
	return false;
}
bool isNumber2(char c) {
	if (c >= '1' && c <= '9')
		return true;
	return false;
}




int main()
{
	string s;
	vector <int64_t> v;
	getline(cin, s);
	int64_t coord = -1, cnt = -1, coord2 = 0, exista = -1;
	for (int i = 0; i < s.size(); i++) {
		if (isNumber(s[i])) {
			exista++;
		}
	}
	if (exista == -1) {
		cout << "NaN";
			return 0;
	}
	if (isNumber2(s[0]) && exista == s.size() - 1) {
		cout << "CORECT";
		return 0;
	}
    if (s[0] == '0' && s.size() == 1) {
		cout << "CORECT";
		return 0;
	}

	for (int i = 0; i < s.size(); i++) {
		if (isNumber2(s[i])) {
			cout << s[i];
			cnt++;
			coord = i;
			break;
		}
	}

	if (coord > -1) {
		for (int i = coord + 1; i < s.size(); i++) {
			if (isNumber(s[i])) {
				cout << s[i];
			}
		}
	}
	if (coord == -1)
		cout << '0';

	cout << "\n";
	    
	if (cnt != -1) {
		for (int i = 0; i < s.size(); i++) {
			if (isNumber2(s[i]) == false && s[i] != ' ') {
				if (s[i] == '0' && i < coord) {
					cout << s[i] << ' ';
				}
				else if (s[i] != '0'){
					cout << s[i] << ' ';
				}
			}
		}
		return 0;
	}
	else if (cnt == -1){
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '0') {
				coord2 = i;
			}
		}
	}
	for (int i = 0; i < s.size(); i++) {
		if (isNumber2(s[i]) == false && s[i] != ' ' && i != coord2) {
			cout << s[i] << ' ';
		}
	}
}






