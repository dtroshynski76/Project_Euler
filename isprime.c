#include "isprime.h"

int is_prime(unsigned long long int test) {
    for(unsigned long long int i = 3; i*i <= test; i += 2) {
        if(test % i == 0) {
            return 0;
        }
    }

    return 1;
}
