int scoreOfString(char* s) {
    int score=0;
    for(int i=0;s[i+1]!=0;i++){
        int diff=s[i]-s[i+1];
        if(diff<0){
            diff=-diff;
        }
        score=score+diff;
    }
    return score;
}