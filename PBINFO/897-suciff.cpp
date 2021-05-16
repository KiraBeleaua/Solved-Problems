int64_t sumcif(int n) {
	int x = 0;
	while (n != 0) {
		x += n % 10;
		n = n / 10;
	}
	return x;
}