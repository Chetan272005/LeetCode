int* transformArray(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    int i = 0;
    int even = 0;
    int odd = numsSize - 1;

    while(i < numsSize) {
        if(nums[i] % 2 == 0) {
            ans[even] = 0;
            even++;
        }
        else {
            ans[odd] = 1;
            odd--;
        }
        i++;
    }

    return ans;
}