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
	vector <int64_t> spatiu, lastLetter, firstLetter;
	getline(cin, s);
	spatiu.push_back(-1);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			spatiu.push_back(i);
		}
	}
	spatiu.push_back(s.size());

	vector <string> cuvinte;
	for (int i = 0; i < spatiu.size() - 1; i++) {
		auto start = spatiu[i];
		auto stop = spatiu[i + 1];
		if (start == stop - 1)
			continue;

		string cuvant = "";
		for (int j = start + 1; j < stop; j++) {
			cuvant.push_back(s[j]);
		}
		firstLetter.push_back(start + 1);
		lastLetter.push_back(stop - 1);
		cuvinte.push_back(cuvant);
	}
	cuvinte.push_back("?");
	vector <vector <string>> siruri;
	vector <string> sir;
	for (int i = 0; i < cuvinte.size() - 1; i++) {
		auto c1 = cuvinte[i];
		auto c2 = cuvinte[i+1];
		if (c1[c1.size() - 1] == c2[0]) {
			sir.push_back(c1);
		}
		else {
			sir.push_back(c1);
			siruri.push_back(sir);
			sir.clear();
		}
	}
	int64_t m = 0;
	for (auto sir : siruri) {
		m = max(m,(int64_t) sir.size());
	}
	if (m <= 1) {
		cout << -1;
		return 0;
	}
	auto index = 0;
	for (auto sir : siruri) {
		if (sir.size() != m) {
			index += sir.size();
			continue;
		}
			

		for (int j = 0; j < sir.size(); j++) {
			auto cuv = sir[j];
			cout << cuv;
			index++;
			if (j == sir.size() - 1)
				continue;
			for (int i = lastLetter[index-1] + 1; i < firstLetter[index]; i++) {
				cout << s[i];
			}
		}
		cout << "\n";
	}
}








