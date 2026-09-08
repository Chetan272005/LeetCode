int count(int n){
    int k = 0;
    while(n != 0){
        k++;
        n = n / 10;
    }
    return k;
}
int countCommas(int n) {
    if (n < 1000){
        return 0;
    }
    int val = count(n);
    int sum = 1;
    for(int i = 1; i<val; i++){
        sum =sum*10;
    }
    int comma = n-sum+1;

    if(sum >= 10000){
        sum = sum - 1000;
    }

    if(n < 10000){
        return comma;
    }
    return comma + sum;
}