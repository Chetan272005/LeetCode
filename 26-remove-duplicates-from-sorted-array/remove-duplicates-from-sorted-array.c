int removeDuplicates(int* nums, int numsSize) {
    int i=0;
    int k=1;
    int count=1;
    int new[numsSize];
    new[0] = nums[0];
    while(i < numsSize-1 && i+1 < numsSize){
        if(nums[i] != nums[i+1]){
            new[k] = nums[i+1];
            count++;
            k++;
        }
        i++;
    }
    int j=0;
    while(j < k){
        nums[j] = new[j];
        j++;
    }
    return count;
}