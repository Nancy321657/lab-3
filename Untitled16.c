#include <stdio.h>

int main() {
    int i, num;
    int largest, smallest;

    printf("Enter 100 numbers:\n");

    // Read the first number to initialize largest and smallest
    scanf("%d", &num);
    largest = num;
    smallest = num;

    // Loop to read remaining 99 numbers
    for(i = 1; i < 100; i++) {
        scanf("%d", &num);

        if(num > largest) {
            largest = num;
        }

        if(num < smallest) {
            smallest = num;
        }
    }

    printf("Largest number is: %d\n", largest);
    printf("Smallest number is: %d\n", smallest);

    return 0;
}
