
bool isPerfectSquare(int num) {
    if(num < 0) return false;

    int i = 1;
    while(i <= num/i){
        if(num == i*i){
            return true;
        }
        i++;
    }
    return false;
}
