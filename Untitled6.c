#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int num = 2; // First even number

    for (i = 0; i < n; i++) {
        printf("%d ", num);
        num += 2; // Next even number
    }

    return 0;
}
