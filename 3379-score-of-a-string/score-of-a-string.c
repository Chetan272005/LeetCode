int scoreOfString(char* s) {
    int sum = 0;
    int i = 0;
    while(i < strlen(s) && (i+1) < strlen(s)){
        if((s[i] - s[i+1]) < 0){
            sum = sum - (s[i] - s[i+1]);
        }
        else{
            sum = sum + (s[i] - s[i+1]);
        }
        i++;
    }
    return sum;
}