/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <stdio.h>
#include <string.h>

#define MAX 998001
#define MIN 10000
#define true 1
#define false 0

int is_palindrome(int n) {
    char snum[7];
    int snumLength;

    sprintf(snum, "%d", n);
    snumLength = strlen(snum) - 1;
    for(int i = 0; i <= snumLength; i++) {
        if(snum[i] != snum[snumLength - i]) {
            return false;
        }
    }

    return true;
}

int main(void) {
    unsigned int result;
    unsigned int max = 0;

    for(int i = 100; i <= 999; i++) {
        for(int y = 100; y <= 999; y++) {
            result = i * y;
            if(is_palindrome(result) && (result >= MIN && result <= MAX)) {
                max = result > max ? result : max;
            }
        }
    }
    printf("Max: %d\n", max);

    return 0;
}