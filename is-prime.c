#include <stdio.h>

int main() {
    int n;
    int divisor = 2;

    printf("Insert a number:\n");

    scanf("%d", &n);

    while (n > divisor) {
        if (n % divisor == 0) {
            printf("%d is not a prime number\n", n);
            return 0;
        } else {
            divisor++;
        }
    }

    printf("%d is a prime number", n);
    return 0;
}