int singleNonDuplicate(int* nums, int numsSize) {
    int sum=0;
    int i=0;
    while(i < numsSize){
        sum = sum ^ nums[i];
        i++;
    }
    return sum;
}