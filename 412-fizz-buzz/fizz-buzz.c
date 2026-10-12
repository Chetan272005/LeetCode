/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **arr = malloc(n * sizeof(char*));
    *returnSize = n;

    int i = 0;
    while (i < n) {
        arr[i] = malloc(20 * sizeof(char));

        if ((i + 1) % 15 == 0) {
            strcpy(arr[i], "FizzBuzz");
        }
        else if ((i + 1) % 3 == 0) {
            strcpy(arr[i], "Fizz");
        }
        else if ((i + 1) % 5 == 0) {
            strcpy(arr[i], "Buzz");
        }
        else {
            sprintf(arr[i], "%d", i + 1);
        }
        i++;
    }
    return arr;
}
