#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int64_t lei, pretBomboane, numarCutii, baniNecesari, restulBanilor;
	cin >> pretBomboane >> lei;
	numarCutii = lei / pretBomboane;
	restulBanilor = lei % pretBomboane;
	baniNecesari = pretBomboane - restulBanilor;
	cout << numarCutii << " " << baniNecesari;
}