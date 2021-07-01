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








int main()
{
	string s;
	getline(cin, s);
	int64_t solutie = 0;
	for (int i = 0; i < s.size(); i++) {
		if (i == 0) {
			s[i] -= ' ';
		}
		if (i == s.size() - 1) {
			s[i] -= ' ';
		}
		if (s[i] == ' ' && s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i + 1] >= 'a' && s[i + 1] <= 'z') {
			s[i - 1] -= ' ';
			s[i + 1] -= ' ';
		}
		else if (s[i] == ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z') {
			s[i + 1] -= ' ';
		}
		else if (s[i] == ' ' && s[i - 1] >= 'a' && s[i - 1] <= 'z'){
			s[i - 1] -= ' ';
		}
	}
	cout << s;
}






