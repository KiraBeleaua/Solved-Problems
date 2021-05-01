#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>

using namespace std;

bool VerificaCrescator(vector <int> marcel) {
	if (marcel.size() == 1)
		return false;

	int numarRelatiiCrescator = 0;
	for (int i = 0; i < marcel.size() - 1; i++) {
		if (marcel[i] < marcel[i + 1]) {
			numarRelatiiCrescator++;
		}
	}
	if (numarRelatiiCrescator == marcel.size() - 1) {
		return true;
	}
	else {
		return false;
	}
}

bool VerificaDescrecator(vector <int> marcel) {
	if (marcel.size() == 1)
		return false;

	int numarRelatiiDescrecator = 0;
	for (int i = 0; i < marcel.size() - 1; i++) {
		if (marcel[i] > marcel[i + 1]) {
			numarRelatiiDescrecator++;
		}
	}
	if (numarRelatiiDescrecator == marcel.size() - 1) {
		return true;
	}
	else {
		return false;
	}
}

void printVector(vector<int> v) {
	for (auto el : v) {
		cout << el << " ";
	}
	cout << "\n";
}

int MaximIndice(vector <int> altMarcel) {
	int maxim = altMarcel[0];
	int indice = 0;

	for (int i = 0; i < altMarcel.size(); i++) {
		if (maxim < altMarcel[i]) {
			maxim = altMarcel[i];
			indice = i;
		}
	}

	return indice;
}


int main()
{
	int64_t n, a, rest, numarNumere;
	cin >> numarNumere;
	for (int i = 0; i < numarNumere; i++) {
		cin >> a;
		vector <int> cresc, descr, v;
		n = a;
		
		while (n != 0) {
			rest = n % 10;
			v.push_back(rest);
			n /= 10;
		}
		
		int indice = MaximIndice(v);

		for (int i = 0; i <= indice; i++) {
			cresc.push_back(v[i]);
		}
		for (int i = indice; i < v.size(); i++) {
			descr.push_back(v[i]);
		}

		bool esteCresc = VerificaCrescator(cresc);
		bool esteDescr = VerificaDescrecator(descr);
		if (esteCresc == true && esteDescr == true) {
			cout << 1 << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}
}