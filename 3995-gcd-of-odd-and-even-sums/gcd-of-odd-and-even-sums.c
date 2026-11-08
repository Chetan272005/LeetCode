int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int gcdOfOddEvenSums(int n) {
    int EvenSum = n * (n + 1);
    int OddSum = n * n;

    return gcd(OddSum,EvenSum);
}