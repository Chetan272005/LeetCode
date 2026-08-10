int add(int num){
    int temp=num;
    int n;
    int sum=0;
    while(temp != 0){
        n=temp%10;
        sum=sum+n;
        temp=temp/10;
    }
    if(sum > 9){
        return add(sum);
    }
    return sum;
}
int addDigits(int num) {
    int no = add(num);
    return no;
}