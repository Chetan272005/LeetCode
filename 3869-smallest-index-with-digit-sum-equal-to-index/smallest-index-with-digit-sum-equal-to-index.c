int check(int n){
    int sum = 0;
    int val;
    while(n != 0){
        val = n % 10;
        sum = sum + val;
        n = n / 10;
    }
    return sum;
}
int smallestIndex(int* nums, int numsSize) {
    int  i = 0;
    while(i < numsSize){
        int n = check(nums[i]);

        if(i == n){
            return i;
        }
        i++;
    }
    return -1;
}