#include <stdio.h>

int main() {
    int num, temp, digit, a = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;


    while (temp > 0) {
        digit = temp % 10;
        a = a * 10 + digit;
        temp /= 10;
    }

    printf("Digits of %d are: ", num);


    while (a> 0) {
        digit = a % 10;
        printf("%d ", digit);
        a /= 10;
    }
    printf("\n");

    return 0;
}
