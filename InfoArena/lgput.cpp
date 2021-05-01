#include <fstream>

using namespace std;

int64_t power(int64_t x, int64_t n, int64_t m) {
	x %= m;
	if (n == 1)
		return x;

	if (n % 2 == 0)
		return power(x * x, n / 2, m) % m;
	else
		return (x * power(x * x, (n - 1) / 2, m)) % m;
}

int main() {
	int64_t baza, putere;
	ifstream fin("lgput.in");
	ofstream fout("lgput.out");
	fin >> baza >> putere;
	fout << power(baza, putere, 1999999973);
}
