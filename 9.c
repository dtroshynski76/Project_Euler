/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product a*b*c.
*/
#include <stdio.h>

#define MAX 1000

// Euclidean Algorithm for greatest common divisor
unsigned int gcd(unsigned int a, unsigned int b) {
    if(b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

int main(void) {
    unsigned long long int a, b, c;
    int should_break = 0;

    // solution 1
    /* for(unsigned int a = 1; a <= MAX; a++ ) {
        for (unsigned int b = a + 1; b <= MAX; b++) {
            unsigned int c = MAX - a - b;
            if (a*a + b*b == c*c && a + b + c == MAX) {
                printf("(%u, %u, %u)\n", a, b, c);
                printf("%u * %u * %u = %u\n", a, b, c, a * b * c);
            }
        }
    } */

    // solution 2
    for(unsigned int n = 1; n <= MAX; n++) {
        for(unsigned int m = n + 1; m <= MAX; m++) {
            if (n % 2 != 0 && m % 2 != 0) {
                // m and n can't both be odd
                continue;
            }

            if(gcd(n, m) > 1) {
                // m and n must be coprime
                continue;
            }

            for(unsigned int k = 2; k <= MAX; k++) {
                // Euclid's formula
                a = k * (m*m - n*n);
                b = k * (2 * m * n);
                c = k * (m*m + n*n);

                if (a*a + b*b == c*c && a + b + c == MAX) {
                    printf("(%llu, %llu, %llu)\n", a, b, c);
                    should_break = 1;
                    break;
                }
            }
        }
        if(should_break) {
            break;
        }
    }

    return 0;
}
