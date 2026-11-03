int getXORSum(int* arr1, int arr1Size, int* arr2, int arr2Size) {
    int sum1 = 0;
    int sum2 = 0;
    int i = 0;
    int j = 0;
    while(i < arr1Size){
        sum1 = sum1 ^ arr1[i];
        i++;
    }
    while(j < arr2Size){
        sum2 = sum2 ^ arr2[j];
        j++;
    }

    return sum1 & sum2;
}