#include <stdio.h>

int main() {
    int i;
    int count = 0;
    int num = 2;

    while (count < 10) {
        printf("%d ", num);
        num += 2;
        count++;
    }

    return 0;
}
