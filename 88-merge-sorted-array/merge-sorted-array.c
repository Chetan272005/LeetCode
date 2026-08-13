void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int nums[m+n];
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < m && j < n){
        if(nums1[i] < nums2[j]){
            nums[k] = nums1[i];
            i++;
        }
        else{
            nums[k] = nums2[j];
            j++;
        }
        k++;
    }

    while(i < m){
        nums[k] = nums1[i];
        i++;
        k++;
    }

    while(j < n){
        nums[k] = nums2[j];
        j++;
        k++;
    }

    for(int x = 0; x < m+n; x++){
        nums1[x] = nums[x];
    }
}