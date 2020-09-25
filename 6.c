/*
The sum of the squares of the first ten natural numbers is,
    1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
    (1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
    3025 - 385 = 2640
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum
*/
#include <stdio.h>

#define MAX_NUMBER 100

unsigned long int sum_of_squares() {
    unsigned long int sum = 0;

    for(int i = 1; i <= MAX_NUMBER; i++) {
        sum += i*i;
    }

    return sum;
}

unsigned long int square_of_sum() {
    unsigned long int square = 0;
    unsigned long int sum = 0;

    for(int i = 1; i <= MAX_NUMBER; i++) {
        sum += i;
    }

    square = sum*sum;

    return square;
}

int main(void) {
    unsigned long int sumOfSquares = sum_of_squares();
    unsigned long int squareOfSum = square_of_sum();

    printf("Sum of squares: %lu\n", sumOfSquares);
    printf("Square of sum: %lu\n", squareOfSum);
    printf("Difference: %lu\n", squareOfSum - sumOfSquares);

    return 0;
}
