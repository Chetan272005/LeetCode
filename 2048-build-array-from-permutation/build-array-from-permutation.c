/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int * ans = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    int i = 0;
    while(i < numsSize){
        ans[i] = nums[nums[i]];
        i++;
    }
    return ans;
}