int hammingWeight(int n) {
    int temp=n;
    int count=0;
    int view;
    while(temp != 0){
            view=temp%2;
            if(view == 1){
                count++;
            }
            temp=temp/2;
    }
    return count;
}