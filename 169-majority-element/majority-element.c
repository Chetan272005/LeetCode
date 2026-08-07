int majorityElement(int* nums, int numsSize) {
    int num=0;
    int major=0;

    for(int i=0; i<numsSize ;i++){
        
        if(major == 0){
            num=nums[i];
        }

        if(nums[i] == num){
            major++;
        }
        else{
            major--;
        }
    }
    return num;
}