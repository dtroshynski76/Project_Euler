/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
                                        ^  ^  ^  ^   ^       ^
                                        1  2  3  4   5       6

What is the 10 001st prime number?
*/
#include <stdio.h>
#include "isprime.h"

#define NUM_PRIME 10001

int main(void) {
    unsigned int count = 1;
    unsigned long long int i;

    for(i = 3; ; i += 2) {
        if(is_prime(i)) {
            count++;
            if(count == NUM_PRIME) {
                break;
            }
        }
    }

    printf("count: %u\n", count);
    printf("prime: %llu\n", i);

    return 0;
}
