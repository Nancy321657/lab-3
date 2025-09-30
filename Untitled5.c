#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int num = 1; // First odd number

    for (i = 0; i < n; i++) {
        printf("%d ", num);
        num += 2; // Next odd number
    }

    return 0;
}
