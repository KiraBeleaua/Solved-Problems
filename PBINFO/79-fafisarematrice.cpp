void afismat(int b[100][100], int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << b[i][j] << ' ';
		}
		cout << "\n";
	}
}