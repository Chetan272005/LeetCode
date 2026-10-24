int maxOperations(int* nums, int numsSize) {
    if(numsSize == 0 || numsSize == 1){
        return 0;
    }

    int sum = nums[0] + nums[1];
    int count = 1;

    int i = 2;
    while(i < numsSize && (i+1) < numsSize){
        if(sum == (nums[i] + nums[i+1])){
            count++;
        }
        else{
            break;
        }
        i=i+2;
    }
    return count;
}