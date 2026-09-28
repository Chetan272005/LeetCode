int minOperations(int* nums, int numsSize, int k) {
    int sum = 0;
    int i = 0;
    while(i < numsSize){
        sum = sum + nums[i];
        i++;
    }
    return sum % k;
}