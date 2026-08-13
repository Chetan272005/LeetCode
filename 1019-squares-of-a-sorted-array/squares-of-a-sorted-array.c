#include <stdlib.h>

int* sortedSquares(int* nums, int numsSize, int* returnSize) {

    int *sqnums = malloc(numsSize * sizeof(int));

    for(int i = 0; i < numsSize; i++) {
        sqnums[i] = nums[i] * nums[i];
    }

    for(int i = 0; i < numsSize - 1; i++) {
        for(int j = i + 1; j < numsSize; j++) {

            if(sqnums[i] > sqnums[j]) {
                int temp = sqnums[i];
                sqnums[i] = sqnums[j];
                sqnums[j] = temp;
            }
        }
    }

    *returnSize = numsSize;

    return sqnums;
}