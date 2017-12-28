#include <stdio.h>

/**
 * Scrivere un programma che riceva in ingresso una sequenza di numeri positivi e ad ogni
 * numero letto ne stampi la somma progressiva. Il programma termina quando si introduce un
 * numero minore o uguale a zero.
 * @return int exitcode
 */
int main() {
    int n;
    int sum = 0;

    printf("Insert a positive number: \n");

    while (scanf("%d", &n)) {
        if (n <= 0) {
            break;
        }

        sum = sum + n;
        printf("Sum is: %d \n", sum);
    }
}