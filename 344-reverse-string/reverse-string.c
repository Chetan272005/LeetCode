void reverseString(char* s, int sSize) {
    int i = 0;
    int k = sSize - 1;
    while(i < k){
        char temp = s[i];
        s[i] = s[k];
        s[k] = temp;
        i++;
        k--;
    }
    return;
}