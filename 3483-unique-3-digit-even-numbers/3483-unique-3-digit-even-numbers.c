int totalNumbers(int* digits, int digitsSize) {
    int count = 0;
    int a[1000] = {0};

    if (digitsSize == 3 &&
        digits[0] == digits[1] &&
        digits[1] == digits[2]) {
        if (digits[0] != 0 && digits[0] % 2 == 0) {
            return 1;
        }
        return 0;
    }

    for (int i = 0; i < digitsSize; i++) {
        for (int j = 0; j < digitsSize; j++) {
            for (int k = 0; k < digitsSize; k++) {

                if (i == j || j == k || i == k) {
                    continue;
                }

                if (digits[i] == 0) {
                    continue;
                }

                int num = digits[i] * 100 + digits[j] * 10 + digits[k];

                if (num % 2 == 0 && a[num] == 0) {
                    a[num] = 1;
                    count++;
                }
            }
        }
    }

    return count;
}