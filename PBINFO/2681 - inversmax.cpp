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


bool isVowel(char c) {
	string v = "aeiouAEIOU";
	auto r = v.find(c);
	if (r != string::npos)
		return true;
	return false;
}

bool isConsonant(char c) {
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) && !isVowel(c))
		return true;
	return false;
}

bool isLetter(char c) {
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return true;
	return false;
}




int main()
{
	string s;
	vector <int64_t> v, spatiu, lettercoord, spatiu2;
	getline(cin, s);
	int64_t solutie = 1, spatiucnt = 0;
	if (s[0] != ' ')
	spatiu.push_back(0);
	for (int i = 0; i < s.size() - 1; i ++) {
		if (s[i] != ' ' && s[i + 1] == ' ') {
			solutie++;
			v.push_back(i);
		}
		if (s[i] == ' ' && s[i + 1] != ' ') {
			spatiucnt++;
			spatiu.push_back(i + 1);
			spatiu2.push_back(i);
		}
		if (isLetter(s[i])) {
			lettercoord.push_back(i);
		}
	}
	
	v.push_back(s.size()- 1);


	int64_t maxim = 0;
	for (int i = 0; i < v.size(); i++) {
		int64_t xd = 0;
		for (int j = spatiu[i]; j <= v[i]; j++) {
			if (isLetter(s[j])) {
				xd++;
			}
		}
		if (((v[i] - spatiu[i]) > maxim) && xd > 0)
			maxim = v[i] - spatiu[i];
	}




	string turbo32;
	if (s[0] == ' ') {
		turbo32.push_back(' ');
	}
	int64_t beleaua = 0;
	while (solutie > 0) {
		for (int i = 0; i < v.size(); i++) {
			string nebun32;
			int64_t xd = 0;
			for (int j = spatiu[i]; j <= v[i]; j++) {
				if (isLetter(s[j])) {
					xd++;
				}
				if (xd > 0)
					break;
			}
			if (((v[i] - spatiu[i]) == maxim) && xd > 0) {
				for (int j = v[i]; j >= spatiu[i]; j--) {
					nebun32.push_back(s[j]);
				}
				for (int k = 0; k < nebun32.size(); k++) {
					turbo32.push_back(nebun32[k]);
				}
			}
			else {
				for (int j = spatiu[i]; j <= v[i]; j++) {
					nebun32.push_back(s[j]);
				}
				for (int k = 0; k < nebun32.size(); k++) {
					turbo32.push_back(nebun32[k]);
				}
			}
			if (i < spatiu2.size()) {
				if (s[0] != ' ') {
					int64_t spatiuturbo = spatiu2[i] - v[i];
					while (spatiuturbo > 0) {
						turbo32.push_back(' ');
						spatiuturbo--;
					}
				}
				else if (s[0] == ' ' && i + 1 < spatiu2.size()) {
					int64_t spatiuturbo = spatiu2[i+1] - v[i];
					while (spatiuturbo > 0) {
						turbo32.push_back(' ');
						spatiuturbo--;
					}
				}
			}
			solutie--;
		}
	}
	cout << turbo32 << " ";
}






