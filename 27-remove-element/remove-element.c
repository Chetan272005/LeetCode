int removeElement(int* nums, int numsSize, int val) {
    int i=0;
    int k=0;
    int count=0;
    if(numsSize == 0){
        return 0;
    }
    int n[numsSize];
    while(i < numsSize){
        if(nums[i] != val){
            n[k] = nums[i];
            k++;
            count++;
        }
        i++;
    }
    for(int i=0; i<k; i++){
        nums[i] = n[i];
    }
    return count;
}