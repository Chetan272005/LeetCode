
int isPrime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0)
            return 0;
    }

    return n;
}

int reverse(int n) {
    int rev = 0;

    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}

int sumOfPrimesInRange(int n) {
    int m = reverse(n);

    int min = (n < m) ? n : m;
    int max = (n > m) ? n : m;

    int sum = 0;

    for (int i = min; i <= max; i++) {
        sum += isPrime(i);
    }

    return sum;
}
