int minMoves(int* nums, int numsSize) {
    int sum = 0;
    int max = INT_MIN;

    int i = 0;
    while(i < numsSize){
        if(nums[i] >= max){
            max = nums[i];
        }
        sum = sum + nums[i];
        i++;
    }

    return max*numsSize - sum;
}