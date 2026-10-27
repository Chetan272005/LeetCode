int max(int n, int m){
    if(n > m){
        return n;
    }
    return m;
}
int maxSubArray(int* nums, int numsSize) {
    int maxSum = nums[0];
    int i = 0;
    int sum = 0;
    while(i < numsSize){
        sum = sum + nums[i];
        maxSum = max(maxSum,sum);
        if(sum < 0){
            sum = 0;
        }
        i++;
    }
    return maxSum;
}