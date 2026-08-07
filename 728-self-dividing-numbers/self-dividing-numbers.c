#include <stdlib.h>

int *result;
int idx;

void check(int num){
    int temp=num;
    int view;
    int count=0;
    int point=0;
    while(temp != 0){
        view=temp%10;
        point++;
        temp=temp/10;
    }
    temp=num;
    while(temp != 0){
        view=temp%10;
        if(view == 0){
            return;
        }
        if(num % view == 0){
            count++;
        }
        temp=temp/10;
    }
    if(count == point){
        result[idx++] = num;
    }
    return;
}

void self(int left,int right){
    while(left <= right){
        int num=left;
        if(num < 10 && num>=1){
            result[idx++] = num;
        }
        if(num >= 10){
            check(num);
        }
        left++;
    }
}

int* selfDividingNumbers(int left, int right, int* returnSize){
    result = (int*)malloc((right - left + 1) * sizeof(int));
    idx = 0;
    self(left, right);
    *returnSize = idx;
    return result;
}