int check(int n){
    int count = 0;
    while(n != 0){
        count++;
        n = n/10;
    }
    return count;
}
int maxProduct(int n) {
    int val = check(n);

    int a[val];

    int i = 0;
    while(n != 0){
        int p = n % 10;
        a[i] = p;
        i++;
        n = n / 10;
    }

    if(val == 2){
        return a[0]*a[1];
    }

    int max1 = -1;
    int max2 = -1;

    int j = 0;
    while(j < val){
        if(a[j] > max1){
            max2 = max1;
            max1 = a[j];
        }
        else if(a[j] > max2){
            max2 = a[j];
        }
        j++;
    }

    return max1 * max2;
}