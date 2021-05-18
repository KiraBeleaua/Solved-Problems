void aranjare(int v[], int n){
    int b[10001];
	for (int i = 0; i < n; ++i) {
		b[i] = v[i];
	}
	int p = 0;
	for (int i = 0; i < n; ++i) {
		if (b[i] % 2 == 1)
		{
			v[p] = b[i];
			p++;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (b[i] % 2 == 0)
		{
			v[p] = b[i];
			p++;
		}
	}
}