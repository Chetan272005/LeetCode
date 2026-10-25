/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void merge(int ans[], int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = 0;

    int temp[high - low + 1];

    while (i <= mid && j <= high) {
        if (ans[i] <= ans[j])
            temp[k++] = ans[i++];
        else
            temp[k++] = ans[j++];
    }

    while (i <= mid)
        temp[k++] = ans[i++];

    while (j <= high)
        temp[k++] = ans[j++];

    for (i = low, k = 0; i <= high; i++, k++)
        ans[i] = temp[k];
}

void mergeSort(int ans[], int low, int high) {
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;

    mergeSort(ans, low, mid);
    mergeSort(ans, mid + 1, high);

    merge(ans, low, mid, high);
}
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(numsSize*(sizeof(int)));
    *returnSize = numsSize;

    int j = 0;
    while(j < numsSize){
        ans[j] = nums[j];
        j++; 
    }

    int i = 0;
    while(i < numsSize){
        if(ans[i] % 2 == 0){
            ans[i] = 0;
        }
        else{
            ans[i] = 1;
        }
        i++;
    }

    mergeSort(ans,0,numsSize-1);

    return ans;
}