int digitFrequencyScore(int n) {
    int sum = 0;
    int val = 0;
    while(n != 0){
        val = n % 10;
        sum = sum + val;
        n = n / 10;
    }
    return sum;
}