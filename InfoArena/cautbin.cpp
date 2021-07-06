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
 
#define int64 int64_t
 
using namespace std;
 
int64 binarySearch0(vector<int64>& v, int64 x) {
	int64 left = 0;
	int64 right = v.size() - 1;
	
	while (left <= right) {
		int64 middle = (left + right) / 2;
		if (v[middle] <= x) {
			left = middle + 1;
		}
		else {
			right = middle - 1;
		}
	}
 
	int64 middle = (left + right) / 2;
	if (v[middle] > x) {
		middle--;
	}
	if (v[middle] == x) {
		return middle;
	}
	return -1;
}
 
int64 binarySearch1(vector<int64>& v, int64 x) {
	int64 left = 0;
	int64 right = v.size() - 1;
 
	while (left < right) {
		int64 middle = (left + right) / 2;
		if (v[middle] <= x) {
			left = middle + 1;
		}
		else {
			right = middle;
		}
	}
 
	int64 middle = (left + right) / 2;
	if (v[middle] > x) {
		middle--;
	}
	return middle;
}
 
int64 binarySearch2(vector<int64>& v, int64 x) {
	int64 left = 0;
	int64 right = v.size() - 1;
 
	while (left < right) {
		int64 middle = (left + right) / 2;
		if (v[middle] < x) {
			left = middle + 1;
		}
		else {
			right = middle;
		}
	}
 
	int64 middle = (left + right) / 2;
	if (v[middle] < x) {
		middle++;
	}
	return middle;
}
 
int main()
{
	ifstream fin("cautbin.in");
	ofstream fout("cautbin.out");
 
	int64 n;
	fin >> n;
	vector<int64> v;
	v.resize(n);
	for (auto& e : v) {
		fin >> e;
	}
 
	int64 m;
	fin >> m;
	for (; m; m--) {
		int64 op, x, pos = -1;
		fin >> op >> x;
		switch (op) {
		case 0:
			pos = binarySearch0(v, x);
			break;
		case 1:
			pos = binarySearch1(v, x);
			break;
		case 2:
			pos = binarySearch2(v, x);
			break;
		}
 
		if (pos == -1)
			fout << -1 << "\n";
		else
			fout << pos + 1 << "\n";
	}
}
 
 
 
 
 
 
 
 
 
© 2004-2021 Asociatia infoarenaPrima paginaDespre infoarenaTermeni si conditiiContactSari la inceputul paginii ↑
Creative Commons LicenseCu exceptia cazurilor in care se specifica altfel, continutul site-ului infoarena
este publicat sub licenta Creative Commons Attribution-NonCommercial 2.5.