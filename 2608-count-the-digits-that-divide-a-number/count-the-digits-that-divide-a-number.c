int countDigits(int num){
    int count = 0;
    int temp=num;
    int view;
    if(num >=1 && num <10){
        return 1;
    }
    while(temp != 0){
        view=temp%10;
        if(view != 0 && num % view == 0){
            count++;
        }
        temp=temp/10;
    }
    return count;
}