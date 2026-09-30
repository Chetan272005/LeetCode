int sumOfMultiples(int n) {
    int sum1 = 0;

    for(int i = 3; i <= n; i += 3)
        sum1 += i;

    for(int j = 5; j <= n; j += 5)
        sum1 += j;

    for(int k = 7; k <= n; k += 7)
        sum1 += k;

    for(int w = 15; w <= n; w += 15)
        sum1 -= w;

    for(int x = 35; x <= n; x += 35)
        sum1 -= x;

    for(int z = 21; z <= n; z += 21)
        sum1 -= z;

    for(int y = 105; y <= n; y += 105)
        sum1 += y;

    return sum1;
}