#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Formula: Sum of first n odd numbers = n^2
    sum = n * n;

    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
}

