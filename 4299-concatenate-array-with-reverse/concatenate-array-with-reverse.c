/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    int * ans = malloc((2*numsSize) * sizeof(int));
    for(int i = 0; i < numsSize; i++){
        ans[i] = nums[i];
        ans[i + numsSize] = nums[numsSize - i - 1];
    }
    *returnSize = 2 * numsSize;
    return ans;
}