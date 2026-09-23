int findNonMinOrMax(int* nums, int numsSize) {
    if(numsSize == 0 || numsSize == 1 || numsSize == 2){
        return -1;
    }

    int max = -1;
    int i = 0;
    while(i < numsSize){
        if(nums[i] > max){
            max = nums[i];
        }
        i++;
    }

    int min = nums[0];
    int j = 1;
    while(j < numsSize){
        if(nums[j] < min){
            min = nums[j];
        }
        j++;
    }

    for(int k = 0; k < numsSize; k++){
        if(nums[k] != max && nums[k] != min){
            return nums[k];
        }
    }
    return -1;
}