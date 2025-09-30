#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, mean;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    float values[n];

    printf("Enter %d values:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &values[i]);
        sum += values[i];
    }

    mean = sum / n;

    printf("Sum = %f\n", sum);
    printf("Mean = %f\n", mean);

    return 0;
}
