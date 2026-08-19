int findMin(int* nums, int numsSize) {
    int count = 0;
    int i=0;
    if(numsSize == 1){
        return nums[0];
    }
    while(i < numsSize && (i+1) < numsSize){
        if(nums[i] < nums[i+1]){
            count++;
        }
        i++;
    }
    if(count == numsSize-1){
        return nums[0];
    }
    
    int min1=nums[0];
    int j=1;
    while(j <= count){
        if(nums[j] < min1){
            min1 = nums[j];
        }
        j++;
    }

    int min2=nums[count+1];
    int k=count+1;
    while(k < numsSize){
        if(nums[k] < min2){
            min2 = nums[k];
        }
        k++;
    }
    if(min1 < min2){
        return min1;
    }
    return min2;
}