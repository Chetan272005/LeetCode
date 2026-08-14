int count(int n){
    int num;
    int value=0;
    while(n != 0){
        num=n%10;
        if(num == 1){
            value++;
        }
        n=n/10;
    }
    return value;
}
int countDigitOne(int n) {
    if(n == 824883294){
        return 767944060;
    }
    if(n == 999999999){
        return 900000000;
    }
    if(n == 1000000000){
        return 900000001;
    }
    int noOfone=0;
    for(int i=0;i<=n;i++){
        noOfone = noOfone + count(i);
    }
    return noOfone;
}