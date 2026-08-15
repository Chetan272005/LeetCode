int findPeakElement(int* nums, int numsSize) {
    if(numsSize == 1){
        return 0;
    }
    if(nums[0] > nums[1]){
        return 0;
    }
    if(nums[numsSize-2] < nums[numsSize-1]){
        return numsSize-1;
    }
    int left=0;
    int mid=1;
    int right=2;
    int i = 1;
    while(i < numsSize-1){
        if(nums[mid] > nums[left] && nums[mid] > nums[right]){
            return mid;
        }
        left++;
        mid++;
        right++;
        i++;
    }
    return -1;
}