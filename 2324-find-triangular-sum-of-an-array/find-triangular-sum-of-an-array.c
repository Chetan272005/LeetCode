int sum(int a[], int n){

    if(n == 1){
        return a[0] % 10;
    }

    int arr[n-1];
    int i = 0;

    while(i < n && (i+1) < n){
        arr[i] = (a[i] + a[i+1]) % 10;
        i++;
    }

    return sum(arr, n-1);
}

int triangularSum(int* nums, int numsSize) {
    int n = sum(nums, numsSize);
    return n;
}