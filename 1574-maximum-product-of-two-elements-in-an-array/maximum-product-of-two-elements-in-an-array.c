int maxProduct(int* nums, int numsSize) {

    int n = numsSize;
    int max1 = nums[0];
    int max2 = nums[1];

    if (max1 > max2) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (int i = 2; i < n; i++) {
        if (nums[i] >= max2) {
            max1 = max2;
            max2 = nums[i];
        }
        else if (nums[i] > max1) {
            max1 = nums[i];
        }
    }

    return max1 * max2 - max2 - max1 + 1;
}