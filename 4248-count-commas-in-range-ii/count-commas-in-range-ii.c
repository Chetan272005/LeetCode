long long countCommas(long long n) {
    long long count = 0;
    long long start = 1000;

    while (start <= n) {
        count = count + (n - start + 1);
        start = start * 1000;
    }

    return count;
}