int reverseDegree(char* s) {
    int arr[strlen(s)];

    for(int i = 0; i < strlen(s); i++){
        arr[i] = s[i];
    }

    for(int j = 0; j < strlen(s); j++){
        arr[j] = 26 - (arr[j] % 96) + 1;
    }

    int sum = 0;
    for(int k = 0; k < strlen(s); k++){
        sum = sum + arr[k]*(k+1);
    }
    return sum;
}