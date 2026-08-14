#include<string.h>
int strStr(char* haystack, char* needle) {
    int i=0;
    int k=0;
    int count=0;
    int a=strlen(haystack);
    int b=strlen(needle);
    if(a < b ){
        return -1;
    }
    while(i < a){
            int j=0;
            j = i + j;
            while(j < a && k < b){
            if(haystack[j] == needle[k]){
                count++;
                k++;
            }
            else{
                count = 0;
                k = 0;
                break;
            }
            j++;
        }
        if(k == b){
            return i;
        }
        i++;
    }
    return -1;
}