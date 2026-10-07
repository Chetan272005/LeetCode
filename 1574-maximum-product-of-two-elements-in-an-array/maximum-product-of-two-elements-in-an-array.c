void merge(int a[], int low, int mid, int high){
    int i = low;
    int j = mid + 1;
    int k = 0;

    int temp[high - low + 1];

    while(i <= mid && j <= high){
        if(a[i] >= a[j]){
            temp[k] = a[j];
            k++;
            j++;
        }
        else{
            temp[k] = a[i];
            k++;
            i++;
        }
    }

    while(i <= mid){
        temp[k] = a[i];
        k++;
        i++;
    }

    while(j <= high){
        temp[k] = a[j];
        k++;
        j++;
    }

    for(i = low, k = 0; i <= high; i++, k++){
        a[i] = temp[k];
    }
}

void mergesort(int a[], int low, int high){
    if(low < high){
        int mid = low + (high - low) / 2;

        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}
int maxProduct(int* nums, int numsSize) {
    
    mergesort(nums, 0, numsSize - 1); 

    int max = (nums[numsSize - 2] - 1) * (nums[numsSize - 1] - 1);

    return max;
}