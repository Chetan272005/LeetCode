/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    int* ans = (int*)malloc(numsSize * sizeof(int));

    int k = 0;

    for (int i = 0; i < numsSize; i += 2) {
        ans[i] = nums[k];
        ans[i + 1] = nums[k + n];
        k++;
    }

    *returnSize = numsSize;

    return ans;
}