int64_t factorial(int64_t n) {
    int64_t x = 1;
    for (int i = 1; i <= n; i++) {
        x *= i;
    }
    return x;
}