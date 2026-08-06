#include <limits.h>

int divide(int dividend, int divisor) {
    // LeetCode-required overflow guard: INT_MIN / -1 = 2147483648,
    // which doesn't fit in a 32-bit int, so it must be clamped.
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    if (divisor == 1) {
        return dividend;
    }
    if (divisor == -1) {
        return -dividend;
    }

    int count = 0;

    if (dividend > 1 && divisor > 1) {
        while (divisor <= dividend) {
            dividend = dividend - divisor;
            count++;
        }
        return count;
    }
    if (dividend > 1 && divisor < -1) {
        long div = -(long)divisor;   // widened so no overflow if divisor were INT_MIN
        while (div <= dividend) {
            dividend = dividend - div;
            count++;
        }
        return -count;
    }
    if (dividend < -1 && divisor < -1) {
        long div = -(long)divisor;
        long divi = -(long)dividend; // widened so -INT_MIN doesn't overflow
        while (div <= divi) {
            divi = divi - div;
            count++;
        }
        return count;
    }
    if (dividend < -1 && divisor > 1) {
        long divi = -(long)dividend; // widened so -INT_MIN doesn't overflow
        while (divisor <= divi) {
            divi = divi - divisor;
            count++;
        }
        return -count;
    }

    return 0;
}