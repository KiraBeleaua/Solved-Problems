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


bool isX(char c) {
	if (c == 'x')
		return true;
	return false;
}

bool isY(char c) {
	if (c == 'y')
		return true;
	return false;
}

bool isZ(char c) {
	if (c == 'z')
		return true;
	return false;
}



int main()
{
	string s, s2, v;
	int64_t x = 0, y = 0, z = 0;
	int64_t existaX = -1, existaY = -1, existaZ = -1;
	vector <int64_t> numar;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ') {
			s2.push_back(s[i]);
		}
	}
	v.resize(s2.size() + 1);
	for (int i = 1; i < v.size(); i++) {
			v[i] = s2[i - 1];
	}
	v[0] = '+';
	
	int64_t sign = -1;
	for (int i = 0; i < v.size();i++) {
		if (v[i] == '+') {
			sign = 1;
		}
		if (v[i] == '-') {
			sign = 0;
		}
		int c = 1;
		if (isX(v[i])) {
			existaX++;
			int smth = 1;
			while (isNumber(v[i-smth])) {
				if (sign == 1) {
					if (v[i - smth] == '+' || v[i - smth] == '-')
						break;
					x += ((int)v[i - smth] - '0') * c;
					smth++;
					c *= 10;
				}
				if (sign == 0) {
					if (v[i - smth] == '+' || v[i - smth] == '-')
						break;
					x -= ((int)v[i - smth] - '0') * c;
					smth++;
					c *= 10;
				}
			}
			if (v[i - 1] == '+' && isX(v[i])) {
				x += 1;
			}
			if (v[i - 1] == '-' && isX(v[i])) {
				x -= 1;
			}
		}
		if (isY(v[i])) {
			existaY++;
			int smth = 1;
			while (isNumber(v[i - smth])) {
				if (sign == 1) {
					if (v[i - smth] == '+' || v[i - smth] == '-')
						break;
					y += ((int)v[i - smth] - '0') * c;
					smth++;
					c *= 10;
				}
				if (sign == 0) {
					if (v[i - smth] == '+' || v[i - smth] == '-')
						break;
					y -= ((int)v[i - smth] - '0') * c;
					smth++;
					c *= 10;
				}
			}
			if (v[i - 1] == '+' && isY(v[i])) {
				y += 1;
			}
			if (v[i - 1] == '-' && isY(v[i])) {
				y -= 1;
			}
		}
		if (isZ(v[i])) {
			existaZ++;
			int smth = 1;
			while (isNumber(v[i - smth])) {
				if (sign == 1) {
					if (v[i - smth] == '+' || v[i - smth] == '-')
						break;
					z += ((int)v[i - smth] - '0') * c;
					smth++;
					c *= 10;
				}
				if (sign == 0) {
					if (v[i - smth] == '+' || v[i - smth] == '-')
						break;
					z -= ((int)v[i - smth] - '0') * c;
					smth++;
					c *= 10;
				}
			}
			if (v[i - 1] == '+' && isZ(v[i])) {
				z += 1;
			}
			if (v[i - 1] == '-' && isZ(v[i])) {
				z -= 1;
			}
		}
	}
	
	if (existaX > -1 && existaY > -1 && existaZ > -1) {
		if (x == y && y == z) {
			cout << x << "x";
			cout << y << "y";
			cout << z << "z";
		}
		if (x > y && x > z) {
			cout << x << "x";
		}
		if (y > x && y > z) {
			cout << y << "y";
		}
		if (z > x && z > y) {
			cout << z << "z";
		}
		return 0;
	}
	if (existaZ == -1 && existaY > -1 && existaX > -1) {
		if (x == y) {
			cout << x << "x";
			cout << y << "y";
		}
		if (x > y) {
			cout << x << "x";
		}
		if (y > x) {
			cout << y << "y";
		}
		return 0;
	}
	if (existaY == -1 && existaZ > -1 && existaX > -1) {
		if (x == z) {
			cout << x << "x";
			cout << z << "z";
		}
		if (x > z) {
			cout << x << "x";
		}
		if (z > x) {
			cout << z << "z";
		}
		return 0;
	}
	if (existaX == -1 && existaY > -1 && existaZ > -1) {
		if (z == y) {
			cout << y << "y";
			cout << z << "z";
		}
		if (y > z) {
			cout << y << "y";
		}
		if (z > y) {
			cout << z << "z";
		}
		return 0;
	}
	if (existaX == -1 && existaY == -1) {
		cout << z << "z";
		return 0;
	}
	if (existaZ == -1 && existaY == -1) {
		cout << x << "x";
		return 0;
	}
	if (existaZ == -1 && existaX == -1) {
		cout << y << "y";
		return 0;
	}
}