/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {

    int leftsum[numsSize];
    int rightsum[numsSize];

    leftsum[0] = 0;

    int i = 1;

    while(i < numsSize){
        leftsum[i] = nums[i-1] + leftsum[i-1];
        i++;
    }

    rightsum[numsSize-1] = 0;

    i = numsSize - 2;

    while(i >= 0){
        rightsum[i] = nums[i+1] + rightsum[i+1];
        i--;
    }

    int* ans = (int*)malloc(numsSize * sizeof(int));

    int j = 0;

    while(j < numsSize){

        if(j == 0){
            ans[0] = rightsum[0];
        }
        else if(j == numsSize - 1){
            ans[numsSize - 1] = leftsum[numsSize - 1];
        }
        else{
            if(leftsum[j] - rightsum[j] < 0){
                ans[j] = rightsum[j] - leftsum[j];
            }
            else{
                ans[j] = leftsum[j] - rightsum[j];
            }
        }

        j++;
    }

    *returnSize = numsSize;

    return ans;
}