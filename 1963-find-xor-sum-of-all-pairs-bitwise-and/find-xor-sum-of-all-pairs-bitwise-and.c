int getXORSum(int* arr1, int arr1Size, int* arr2, int arr2Size) {
    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0; i < arr1Size; i++){
        sum1 ^= arr1[i];
    }
    for(int j = 0; j < arr2Size; j++){
        sum2 ^= arr2[j];
    }

    return sum1 & sum2;
}