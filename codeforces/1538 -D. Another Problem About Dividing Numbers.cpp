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

const int64 N = 5e4;

bitset<N> isPrime; // vector<bool> cu size N
vector<int64> primes;

void getPrimes() {
	isPrime.set();
	isPrime[0] = isPrime[1] = false; // isPrime[i] = inseamna daca numarul "i" este prim
	for (int i = 2; i < N; i++) {
		if (isPrime[i] == false)
			continue;
		for (int m = i+i; m < N; m += i) {
			isPrime[m] = false;
		}
	}

	for (int i = 2; i < N; i++) {
		if (isPrime[i])
			primes.push_back(i);
	}
}

int64 getNrPrimeExponents(int64 nr) {
	int64 res = 0;

	for (auto p : primes) {
		if (p * p > nr) // p se va opri cand p > sqrt(nr)
			break;

		while (nr % p == 0) {
			nr /= p;
			res++;
		}
	}

	if (nr > 1)
		res++;

	return res;
}

int main()
{
	getPrimes();

	int64_t t, a, b, k, max, min = 2;
	cin >> t;
	for (int z = 0; z < t; z++) {
		int64 nrExponents = 0;
		cin >> a >> b >> k;
		int64_t copiea, copieb;
		min = 2;
		copiea = a;
		copieb = b;
		int64_t impartitor = 1;
		if (a == 1 && b == 1) {
			cout << "No" << "\n";
			continue;
		}

		nrExponents += getNrPrimeExponents(a);
		nrExponents += getNrPrimeExponents(b);
		if (a % b == 0) {
			min = 1;
		}
		if (b % a == 0) {
			min = 1;
		}
		if (a == b && k == 1) {
			cout << "No";
			cout << "\n";
			continue;
		}
		max = nrExponents;
		if (max >= k && k >= min && k != 1) {
			cout << "Yes";
		}
		else if (k == 1 && min == 1 && max >= k && k >= min) {
			cout << "Yes";
		}
		else{
			cout << "No";
		}
		cout << "\n";
	}
}









