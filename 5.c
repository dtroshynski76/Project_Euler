/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include <stdio.h>

int main(void) {
    /* restrictions:
        - must be even
       test for: 11 12 13 14 15 16 17 18 19 20
        - 1 is a given
        - 20 covers: 2, 4, 5, 10
        - 18 covers: 3, 6, 9
        - 16 covers: 8
        - 14 covers: 7
    */
    unsigned long long int x;

    for(x = 60; x <= 1000000000; x += 20) {
        if(
            x % 19 == 0 &&
            x % 18 == 0 &&
            x % 17 == 0 &&
            x % 16 == 0 &&
            x % 15 == 0 &&
            x % 14 == 0 &&
            x % 13 == 0 &&
            x % 12 == 0 &&
            x % 11 == 0
        ) {
            printf("%llu\n", x);
            break;
        }
    }

    return 0;
}
