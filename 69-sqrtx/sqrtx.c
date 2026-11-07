int mySqrt(int x) {
    int high = x;
    int low = 0;
    int mid,result;

    if(x == 0 || x == 1){
        return x;
    }

    while(low <= high){
        mid = low + (high - low)/2;

        if(mid != 0 && mid <= x / mid){
            low = mid + 1;
            result = mid;
        }

        else{
            high = mid - 1;
        }
    }
    return result;
}