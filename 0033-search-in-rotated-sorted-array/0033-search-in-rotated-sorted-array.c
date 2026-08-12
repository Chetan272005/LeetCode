int search(int* nums, int numsSize, int target) {
    int a=-100000;
    int k=0;
    int i=0;
    while(i != numsSize){
        if(a < nums[i]){
            a = nums[i];
            k = i;
        }
        i++;
    }
    if(nums[k] == target){
        return k;
    }
    if(numsSize == 1){
        if(nums[0] == target){
            return 0;
        }
        else{
            return -1;
        }
    }
    if(k == numsSize-1){
      for(int j=0; j<=k ; j++){
        if(nums[j] == target){
            return j;
        }
    }
    }
    if(nums[k] < target){
    for(int j=0; j<=k ; j++){
        if(nums[j] == target){
            return j;
        }
    }
    } 
    if(nums[k] > target){
    for(int j=0; j<=k ; j++){
        if(nums[j] == target){
            return j;
        }
    }
    } 
    if(nums[k] > target){
    for(int x=k+1; x<numsSize ; x++){
        if(nums[x] == target){
            return x;
        }
    }
    }
    if(nums[k] < target){
    for(int x=k+1; x<numsSize ; x++){
        if(nums[x] == target){
            return x;
        }
    }
    }
    if(k == 0){
        if(nums[0] == target){
            return 0;
        }
        else{
            return -1;
        }
    } 
    return -1;
}