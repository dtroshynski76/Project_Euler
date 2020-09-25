/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "isprime.h"

int main(void) {
    unsigned long long int num = 600851475143;
    unsigned long long int half = floor(num / 2);

    setlocale(LC_NUMERIC, "");
    printf("half: %'llu\n", half);

    // loop through all numbers up to half of num
    // if number is_prime and factors num, print
    for(unsigned long long int i = 1; i <= half; i += 2) {
        if(is_prime(i) && num % i == 0) {
            printf("%llu\n", i);
        }
    }

    return 0;
}