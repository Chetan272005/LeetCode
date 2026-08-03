int findFirst(int A[], int n, int target) {
    int lo = 0, hi = n - 1;
    int result = -1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (A[mid] == target) {
            result = mid;      // record this match...
            hi = mid - 1;      // ...but keep looking to the left for an earlier one
        } else if (A[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    return result;  // -1 if not found
}
int findLast(int A[], int n, int target) {
    int lo = 0, hi = n - 1;
    int result = -1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (A[mid] == target) {
            result = mid;      // record this match...
            lo = mid + 1;      // ...but keep looking to the right for a later one
        } else if (A[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    return result;
}
int* searchRange(int* A, int n, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    result[0] = findFirst(A, n, target);
    result[1] = findLast(A, n, target);

    return result;
}