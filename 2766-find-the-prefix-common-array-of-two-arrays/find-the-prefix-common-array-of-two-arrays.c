int check(int A[], int B[], int k) {
    int count = 0;
    int j = 0;

    for(int i = 0; i <= k; i++) {
        if(A[j] == B[i]) {
            count++;
        }

        if(i == k) {
            i = -1;  // -1 because for loop will increment it
            j++;
        }

        if(j > k) {
            break;
        }
    }

    return count;
}

int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    int *ans = malloc(ASize * sizeof(int));
    int k = 0;

    for(int i = 0; i < ASize; i++, k++) {
        ans[i] = check(A, B, k);
    }

    *returnSize = ASize;
    return ans;
}