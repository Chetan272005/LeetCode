bool judgeSquareSum(int c) { 
    if(c == 0 || c == 1){ 
        return true; 
    } 
    
    for(int x = 1; 1LL*x*x <= c; x++){ 
        if(1LL*x*x == c){ 
            return true; 
        } 
    } 
    
    int count = 0; 
    for(int i = 1; 1LL*i*i <= c; i++){ 
        count++; 
    } 
    
    int a[count]; 
    
    for(int j = 0; j < count; j++){ 
        a[j] = (j+1)*(j+1); 
    } 
    
    int p = 0;
    int q = count - 1;

    while(p <= q){ 
        if(1LL*a[p] + a[q] == c){ 
            return true; 
        } 
        else if(1LL*a[p] + a[q] > c){ 
            q--; 
        } 
        else if(1LL*a[p] + a[q] < c){ 
            p++; 
        } 
    }
    
    int min = a[0]; 
    
    for(int k = 1; k < count; k++){ 
        if(a[k] > min && a[k] < c){ 
            min = a[k]; 
        } 
    } 
    
    int sum = min; 
    int diff = c - min; 
    
    for(int p = 1; 1LL*p*p <= c; p++){ 
        if(diff == 1LL*p*p){ 
            sum = sum + diff; 
        } 
    } 
    
    if(sum == c){ 
        return true; 
    } 
    
    return false; 
}