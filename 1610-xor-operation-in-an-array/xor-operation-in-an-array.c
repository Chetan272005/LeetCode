int xorOperation(int n, int start) {
    int i = 0;
    int sum = 0;
    while(i < n){
        sum = sum ^ (start + 2*i);
        i++;
    }
    return sum;
}