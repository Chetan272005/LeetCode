#include<stdbool.h>
bool isPowerOfFour(int n) {
    if(n < 1){
        return false;
    }
    if(n == 1){
        return true;
    }
    int temp=n;
    int count=0;
    int num=1;
    while(temp != 0){
        temp=temp/4;
        count++;
    }
    for(int i=1;i<count;i++){
        num=num*4;
    }
    if(num == n){
        return true;
    }
    return false;
}