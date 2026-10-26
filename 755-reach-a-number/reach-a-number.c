
int reachNumber(int target) {
    long long t = target;

    if (t < 0) {
        t = -t;
    }

    long long sum = 0;
    int steps = 0;

    while (sum < t || (sum - t) % 2 != 0) {
        steps++;
        sum += steps;
    }

    return steps;
}
