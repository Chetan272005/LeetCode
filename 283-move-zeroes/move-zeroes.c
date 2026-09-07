void moveZeroes(int* nums, int numsSize) {
    int zero[numsSize];
    int i = 0;
    int k = 0;
    while(i < numsSize){
        if(nums[i] != 0){
            zero[k] = i;
            k++;
        }
        i++;
    }
    int j = 0;
    while(j < numsSize){
        if(nums[j] == 0){
            zero[k] = j;
            k++;
        }
        j++;
    }
    int a[numsSize];
    int x = 0;
    int b = 0;
    while(x < numsSize){
        a[x] = nums[zero[b]];
        x++;
        b++;
    }

    int n = 0;
    while(n < numsSize){
        nums[n] = a[n];
        n++;
    }
}