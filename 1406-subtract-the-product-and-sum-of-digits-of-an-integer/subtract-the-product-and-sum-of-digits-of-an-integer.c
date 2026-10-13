int SUM(int n){
    int sum = 0;
    while(n != 0){
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int prod(int n){
    int product = 1;
    while(n != 0){
        product = product * (n % 10);
        n = n / 10;
    }
    return product;
}
int subtractProductAndSum(int n) {
    int sum = SUM(n);
    int product = prod(n);

    return product - sum;
}