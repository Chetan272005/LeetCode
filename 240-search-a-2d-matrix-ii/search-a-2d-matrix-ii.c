bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    
    for(int i = 0; i < matrixSize; i++){

        if(target >= matrix[i][0] && target <= matrix[i][*matrixColSize - 1]){

            int low = 0;
            int high = *matrixColSize - 1;

            while(low <= high){
                int mid = low + (high - low) / 2;

                if(matrix[i][mid] == target){
                    return true;
                }
                else if(matrix[i][mid] > target){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
        }
    }

    return false;
}