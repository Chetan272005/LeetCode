double myPow(double x, int n) {
    if (n == 0) return 1.0;
    
    // Reduces memory usage from 8 bytes (long long) to 4 bytes (unsigned int)
    unsigned int N = n; 
    
    if (n < 0) {
        x = 1 / x;
        N = -N; // Two's complement wraps this correctly into 2147483648
    }
    
    double result = 1.0;
    while (N > 0) {
        // Bitwise AND (& 1) checks if odd without arithmetic modulo overhead
        if (N & 1) { 
            result *= x;
        }
        x *= x;
        N >>= 1; // Bitwise right shift divides by 2 efficiently
    }
    
    return result;
}