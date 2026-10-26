
int maximumSwap(int num) {
    if(num == 0){
        return 0;
    }
    int temp = num;
    int countsize = 0;

    while (temp > 0) {
        countsize++;
        temp /= 10;
    }

    int arr[countsize];

    temp = num;
    int i = countsize - 1;

    while (temp > 0) {
        arr[i] = temp % 10;
        temp /= 10;
        i--;
    }

    for (int i = 0; i < countsize - 1; i++) {
        int max = arr[i];
        int maxIndex = i;

        for (int j = i + 1; j < countsize; j++) {
            if (arr[j] >= max) {
                max = arr[j];
                maxIndex = j;
            }
        }

        if (max > arr[i]) {
            int t = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = t;
            break;
        }
    }

    int sum = 0;

    for (int i = 0; i < countsize; i++) {
        sum = sum * 10 + arr[i];
    }

    return sum;
}
