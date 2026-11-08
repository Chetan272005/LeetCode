int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int n = matrixSize;
    int m = *matrixColSize;

    int * ans = malloc(n * sizeof(int));
    *returnSize = n;

    int i = 0;
    int k = 0;
    int sum = 0;

    while(k < n){
        sum = 0;
        i = 0;

        while(i < m){
            sum = sum + matrix[k][i];
            i++;
        }

        ans[k] = sum;
        k++;
    }

    return ans;
}