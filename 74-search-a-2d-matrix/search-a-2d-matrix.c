bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {

    int i = 0;
    int j = 0;
    int k = matrixSize * (*matrixColSize) - 1;

    while(j <= k) {

        int mid = (j + k) / 2;

        // Convert 1-D index into row and column
        i = mid / (*matrixColSize);
        int col = mid % (*matrixColSize);

        if(matrix[i][col] == target) {
            return true;
        }

        else if(matrix[i][col] < target) {
            j = mid + 1;
        }

        else {
            k = mid - 1;
        }
    }

    return false;
}