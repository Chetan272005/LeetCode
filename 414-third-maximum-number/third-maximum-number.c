#include <limits.h>

int thirdMax(int* nums, int numsSize) {

    long long copy[numsSize];
    int zero[numsSize];

    for(int i = 0; i < numsSize; i++) {
        copy[i] = nums[i];
        zero[i] = 0;
    }

    int count = 0;
    int index = -1;

    while(count < 3) {

        long long max = LLONG_MIN;

        for(int i = 0; i < numsSize; i++) {
            if(zero[i] == 0 && copy[i] > max) {
                max = copy[i];
            }
        }

        if(max == LLONG_MIN)
            break;

        index = -1;

        for(int i = 0; i < numsSize; i++) {
            if(zero[i] == 0) {
                copy[i] = copy[i] - max;
            }
        }

        for(int i = 0; i < numsSize; i++) {
            if(zero[i] == 0 && copy[i] == 0) {
                if(index == -1)
                    index = i;

                zero[i] = 1;
            }
        }

        count++;

        if(count == 3) {
            return nums[index];
        }
    }

    int max = nums[0];

    for(int i = 1; i < numsSize; i++) {
        if(nums[i] > max) {
            max = nums[i];
        }
    }

    return max;
}