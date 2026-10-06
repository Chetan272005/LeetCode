/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    
    int * ans = malloc(numsSize * (sizeof(int)));

    int i = 1;
    ans[0] = nums[0];

    while(i < numsSize){
        ans[i] = nums[i] + ans[i-1];
        i++;
    }

    *returnSize = numsSize;

    return ans;
}