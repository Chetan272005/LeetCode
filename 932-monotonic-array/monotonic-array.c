#include<stdbool.h>
bool isMonotonic(int* nums, int numsSize) {
    int count=0;
    int i=0;
    int k=0;
    while(i < numsSize-1){
        if(nums[i] <= nums[i+1]){
            count++;
        }
        if(nums[i] >= nums[i+1]){
            k++;
        }
        i++;
    }
    if(count == numsSize-1){
        return true;
    }
    if(k == numsSize-1){
        return true;
    }
    return false;
}