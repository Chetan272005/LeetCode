
bool checkPossibility(int* nums, int numsSize) {
    int i = 0;
    int count = 0;

    while (i < numsSize - 1) {
        if (nums[i] > nums[i + 1]) {
            count++;

            if (count > 1) {
                return false;
            }

            if (i == 0 || nums[i - 1] <= nums[i + 1]) {
                nums[i] = nums[i + 1];
            } else {
                nums[i + 1] = nums[i];
            }
        }

        i++;
    }

    return true;
}
