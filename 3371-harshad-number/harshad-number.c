int value(int n){
    int sum=0;
    int temp=n;
    int view;
    while(temp != 0){
        view = temp%10;
        sum = sum + view;
        temp=temp/10;
    }
    return sum;
}
int sumOfTheDigitsOfHarshadNumber(int x) {
    int n = value(x);
    if(x % n == 0){
        return n;
    }
    return -1;
}