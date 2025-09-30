#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Formula: Sum of first n even numbers = n * (n + 1)
    sum = n * (n + 1);

    printf("Sum of first %d even numbers is: %d\n", n, sum);

    return 0;
}
