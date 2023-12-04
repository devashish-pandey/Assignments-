// Question 3 -- Fabonacci series
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, nextTerm;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    printf("The first %d terms of the Fibonacci series are: \n", n);

    for (int i = 0; i < n; i++) {
        printf("%d, ", first);
        nextTerm = first + second;
        first = second;
        second = nextTerm;
    }

    return 0;
}