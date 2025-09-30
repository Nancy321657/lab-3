#include <stdio.h>

int main() {
    int i, j, sum = 0;
    int Prime;

    for (i = 2; i <= 500; i++) {
        Prime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                Prime = 0;
                break;
            }
        }

        if (Prime) {
            sum += i;
        }
    }

    printf("Sum of prime numbers between 1 and 500 is: %d\n", sum);

    return 0;
}
