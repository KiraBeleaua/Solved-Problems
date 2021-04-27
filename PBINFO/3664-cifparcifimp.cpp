#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, p = 0, z = 0, a;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a == 0) {
			p += 1;
		}
		else {
			while (a > 0) {
				if (a % 2 == 0) {
					p += 1;
					a /= 10;
				}

				else if (a % 2 != 0) {
					z += 1;
					a /= 10;
				}

			}
		}
	}
	cout << p << " " << z;
}

#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int64_t n, p = 0, z = 0, a;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a;
		do {
			if (a % 2 == 0) {
				p += 1;
			}

			else {
				z += 1;
			}
			a /= 10;

		} while (a != 0);
		{

		}
	}
	cout << p << " " << z;
}




