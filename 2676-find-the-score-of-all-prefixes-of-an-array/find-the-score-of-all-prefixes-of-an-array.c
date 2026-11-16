/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
long long* findPrefixScore(int* nums, int numsSize, int* returnSize) {

    long long *ans = malloc(numsSize * sizeof(long long));
    *returnSize = numsSize;

    int maxV = nums[0];
    long long val = 0;

    for(int i = 0; i < numsSize; i++){

        if(maxV < nums[i]){
            maxV = nums[i];
        }

        val = val + maxV + nums[i];

        ans[i] = val;
    }

    return ans;
}