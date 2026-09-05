/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int count(int add[], int size){ 
    int val = 0; 
    int temp = size;

    while(temp != 0){ 
        val++; 
        temp = temp / 10; 
    } 

    return size;
}  

int* addToArrayForm(int* num, int numSize, int k, int* returnSize) { 

    int sum[10005]; 
    int sumSize = numSize;

    int i = 0; 

    while(i < numSize){ 
        sum[i] = num[i]; 
        i++;  
    } 

    int j = numSize - 1;
    int carry = k;

    while(j >= 0 && carry != 0){

        int add = sum[j] + (carry % 10);

        if(add >= 10){
            sum[j] = add % 10;
            carry = carry / 10 + 1;
        }
        else{
            sum[j] = add;
            carry = carry / 10;
        }

        j--;
    }

    while(carry != 0){

        for(i = sumSize; i > 0; i--){
            sum[i] = sum[i - 1];
        }

        sum[0] = carry % 10;
        carry = carry / 10;

        sumSize++;
    }

    int n = count(sum, sumSize); 

    int* a = (int*)malloc(n * sizeof(int)); 

    int temp1 = 0;

    while(temp1 < n){ 
        a[temp1] = sum[temp1]; 
        temp1++; 
    }

    *returnSize = n;

    return a;
}