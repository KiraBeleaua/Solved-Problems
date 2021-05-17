int64_t nrmaxim(int n) {
    int x = 1;
    int numar = -1;
    int p = 0;
    int copie = n;
    while (copie != 0) {
        x = x * 10;
        p++;
        copie /= 10;
    }
    while (p != 0) {
        n = n % (x / 10) * 10 + n / (x / 10);
        if (n > numar) {
            numar = n;
            p--;
        }
        else if (n < numar) {
            p--;
        }
    }
    return numar;
}