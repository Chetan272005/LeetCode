void merge(int nums[], int low, int mid, int high){
    int i = low;
    int j = mid + 1;
    int k = 0;

    int temp[high - low + 1];

    while(i <= mid && j <= high){
        if(nums[i] >= nums[j]){
            temp[k] = nums[j];
            k++;
            j++;
        }
        else{
            temp[k] = nums[i];
            k++;
            i++;
        }
    }

    while(i <= mid){
        temp[k] = nums[i];
        k++;
        i++;
    }

    while(j <= high){
        temp[k] = nums[j];
        k++;
        j++;
    }

    for(i = low, k = 0; i <= high; i++, k++){
        nums[i] = temp[k];
    }
    return;
}
void mergesort(int nums[], int low, int high){
    if(low < high){
        int mid = low + (high - low)/2;

        mergesort(nums, low, mid);
        mergesort(nums, mid+1, high);

        merge(nums, low, mid, high);
    }
}
int findDuplicate(int* nums, int numsSize) {
    mergesort(nums,0,numsSize-1);

    int i = 0;
    while(i < numsSize && (i+1) < numsSize){
        if((nums[i] ^ nums[i+1]) == 0){
            return nums[i];
        }
        i++;
    }
    return -1;
}