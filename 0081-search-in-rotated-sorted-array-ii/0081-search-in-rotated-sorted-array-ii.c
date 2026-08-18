#include <stdbool.h>

int check(int* nums, int numsSize) {
    int count = 0;
    int i = 0;

    while (i < numsSize - 1) {
        if (nums[i] <= nums[i + 1]) {
            count++;
        }
        else {
            break;
        }
        i++;
    }

    return count;
}

bool search(int* nums, int numsSize, int target) {

    int n = check(nums, numsSize);

    int low = 0;
    int mid;
    int p1 = n;
    int high = numsSize - 1;

    // First sorted part
    while (low <= p1) {

        mid = (low + p1) / 2;

        if (nums[mid] == target) {
            return true;
        }

        if (nums[mid] > target) {
            p1 = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    // Second sorted part
    int p = n + 1;

    while (p <= high) {

        mid = (p + high) / 2;

        if (nums[mid] == target) {
            return true;
        }

        if (nums[mid] > target) {
            high = mid - 1;
        }
        else {
            p = mid + 1;
        }
    }

    return false;
}