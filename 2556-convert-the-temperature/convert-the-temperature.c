/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double c = celsius;

    double* ans = malloc(2 * sizeof(double));

    ans[0] = c + 273.15;
    ans[1] = (c * 1.8) + 32;

    *returnSize = 2;
    return ans;
}