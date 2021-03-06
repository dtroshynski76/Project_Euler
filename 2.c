/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/
#include <stdio.h>
#include <locale.h>

#define MAX 4000000

int fibonacci(int first, int second, int evenSum) {
    unsigned int sum = first + second;
    unsigned int tempEvenSum = evenSum;

    printf("%'d", sum);

    if(sum - first > MAX) {
        return tempEvenSum;
    }
    
    if(sum % 2 == 0) {
        tempEvenSum += sum;
    }

    printf("; ");
    return fibonacci(second, sum, tempEvenSum);
}

int main(void) {
    unsigned int sum;

    setlocale(LC_NUMERIC, "");
    sum = fibonacci(0, 1, 0);
    printf("\neven sum: %'d\n", sum);

    return 0;
}
