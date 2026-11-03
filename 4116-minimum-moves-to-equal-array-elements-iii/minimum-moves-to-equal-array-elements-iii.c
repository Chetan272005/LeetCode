int minMoves(int* nums, int numsSize) {
    int sum = 0;
    int max = INT_MIN;

    int i = 0;
    while(i < numsSize){
        if(nums[i] >= max){
            max = nums[i];
        }
        i++;
    }

    i = 0;
    while(i < numsSize){
        sum = sum + (max - nums[i]);
        i++;
    }
    return sum;
}