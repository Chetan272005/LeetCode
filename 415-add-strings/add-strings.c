
#include <string.h>
#include <stdlib.h>

char* addStrings(char* num1, char* num2) {

    int n1 = strlen(num1);
    int n2 = strlen(num2);

    int max = n1 > n2 ? n1 : n2;

    char* result = (char*)malloc(max + 2);

    int i = n1 - 1;
    int j = n2 - 1;
    int k = 0;
    int carry = 0;

    while(i >= 0 || j >= 0 || carry != 0) {

        int sum = carry;

        if(i >= 0) {
            sum = sum + (num1[i] - '0');
            i--;
        }

        if(j >= 0) {
            sum = sum + (num2[j] - '0');
            j--;
        }

        result[k] = (sum % 10) + '0';
        carry = sum / 10;
        k++;
    }

    result[k] = '\0';

    for(int a = 0; a < k / 2; a++) {
        char temp = result[a];
        result[a] = result[k - a - 1];
        result[k - a - 1] = temp;
    }

    return result;
}
