void inserare(int& n)
{
	int v[20], p = 0;
	while (n)
		v[p] = n % 10, n /= 10, p++;
	int nr = 0;
	for (int i = p - 1; i > 0; --i)
		n = n * 10 + v[i], n = n * 10 + abs(v[i] - v[i - 1]);
	n = n * 10 + v[0];
}


int64_t inserare2(int64_t n) {
	int64_t chestie = 1, counter = 0, counter2 = 0, numar = 0;
	vector<int64_t> v, w;
	int64_t copie = n;
	while (copie != 0) {
		chestie = copie % 10;
		counter++;
		v.push_back(chestie);
		copie /= 10;
	}
	for (int i = 0; i < counter; i++) {
		for (int j = i + 1; j < counter; j++) {
			chestie = abs(v[i] - v[j]);
			w.push_back(chestie);
			counter2++;
			break;
		}
	}
	while (counter != 0 && counter2 != 0) {
		counter--;
		counter2--;
		numar += v[counter] * 10 + w[counter2];
		numar *= 100;
	}
	numar /= 10;
	numar += n % 10;
	return numar;
}