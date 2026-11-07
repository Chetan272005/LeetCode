int mySqrt(int x) {

    if(x == 0){
        return 0;
    }
    int num = 0;

    for(int i = 1; i <= x / i; i++) {
        num = i;
    }

    return num;
}