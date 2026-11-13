
#include <math.h>
#include <stdbool.h>

int check(int n) {

    int sum = 0;
    int val;

    while(n != 0) {
        val = n % 10;
        sum = sum + val * val;
        n = n / 10;
    }

    return sum;
}

bool isHappy(int n) {

    int slow = n;
    int fast = n;

    while(1) {

        slow = check(slow);

        fast = check(check(fast));

        if(slow == 1 || fast == 1) {
            return true;
        }

        if(slow == fast) {
            return false;
        }
    }
}
