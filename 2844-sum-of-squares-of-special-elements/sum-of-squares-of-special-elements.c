int sumOfSquares(int* nums, int numsSize) {
    int i = 0;
    int sum = 0;
    while((i+1) <= numsSize){
        if(numsSize % (i+1) == 0){
            sum = sum + pow(nums[i],2);
        }
        i++;
    }
    return sum;
}