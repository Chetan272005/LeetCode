#include<stdbool.h>
bool isPowerOfTwo(int n) {
    int temp=n;
    int count=0;
    if(n == 1){
        return true;
    }
    if(n < 1){
        return false;
    }
    while(temp != 0){
        temp=temp/2;
        ++count;
    }
    int num=1;
    for(int i=1; i<count; i++){
        num=2*num;
    }
    if(num == n){
        return true;
    }
    return false;
}