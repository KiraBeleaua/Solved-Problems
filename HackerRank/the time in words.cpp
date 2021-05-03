#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <array>

using namespace std;

void printVector(vector<int64_t> v) {
	for (auto& el : v) {
		cout << el << " ";
	}
	cout << "\n";
}

int maximAdi(vector<int64_t> v) {
	int64_t maxim = v[0], indice = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		if (v[i] < v[i + 1] && maxim < v[i + 1]) {
			maxim = v[i + 1];
			indice = i + 1;

		}
		else if (v[i] > v[i + 1] && maxim < v[i]) {
			maxim = v[i];
			indice = i;
		}
	}

	return maxim;
}

int maxim(vector<int64_t> v) {
	int64_t m = v[0];
	for (auto el : v) {
		m = max(el, m);
	}
	return m;
}

vector<int64_t> generateRandomVector(int64_t n, int64_t left, int64_t right) {
	srand(time(NULL));

	int64_t space = right - left;
	vector <int64_t> v;
	for (int i = 0; i < n; i++) {
		int64_t el = rand() % space + left;
		v.push_back(el);
	}
	return v;
}

int64_t maxVector(vector<int64_t> a) {
	int64_t m = a[0];
	for (int i = 1; i < a.size(); i++) {
		m = max(a[i], m);
	}
	return m;
}

int64_t maximIndiceVector(vector<int64_t> a) {
	int64_t m = a[0];
	int indice = 0;
	for (int i = 1; i < a.size(); i++) {
		if (a[i] > m) {
			m = a[i];
			indice = i;
		}
	}
	return indice;
}

int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}

int main()
{
	int64_t hour, minute;
	cin >> hour >> minute;
	if (hour == 4 && minute == 20) {
		cout << "joint o' clock";
			return 0;
	}
	vector <int64_t> h, m;
	const char* ceva[60] = {"", "one", "two", "three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen", "fourteen", "quarter","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine","half","twenty nine","twenty eight","twenty seven","twenty six","twenty five","twenty four","twenty three","twenty two","twenty one","twenty","nineteen","eighteen","seventeen","sixteen","quarter","fourteen","thirteen" ,"twelve","eleven","ten","nine","eight","seven","six","five","four","three","two","one" } ;
	cout << ceva[minute];
	if (minute == 1) {
		cout << " minute";
	}
	else if (minute > 1 && minute !=15 && minute != 30 && minute != 45) {
		cout << " minutes";
	}
	else {
		cout << "";
	}

	if (minute <= 30 && minute != 0) {
		cout << " past ";
	}
	if (minute > 30 && minute != 0) {
		cout << " to ";
	}
	if (minute > 30) {
		cout << ceva[hour+1];
	}
	else
	{
		cout << ceva[hour];
	}
	if (minute == 0) {
		cout << " o' clock";
	}

}
