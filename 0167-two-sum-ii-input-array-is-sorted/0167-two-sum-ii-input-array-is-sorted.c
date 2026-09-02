/** 
 * Note: The returned array must be malloced, assume caller calls free(). 
 */ 
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) { 
    int left = 0; 
    int right = numbersSize-1; 
    
    while(left <= right){ 
        if(numbers[left] + numbers[right] == target){ 
            int* returnArray = malloc(2 * sizeof(int));
            returnArray[0] = left + 1;
            returnArray[1] = right + 1;
            *returnSize = 2;
            return returnArray;
        } 
        else if(numbers[left] + numbers[right] >= target){ 
            right--; 
        } 
        else if(numbers[left] + numbers[right] <= target){ 
            left++; 
        } 
    } 
    
    *returnSize = 0;
    return NULL;
}