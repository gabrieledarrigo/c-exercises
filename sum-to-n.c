#include <stdio.h>

/**
 * Scrivere un programma che riceva in ingresso un numero positivo N e determini il massimo
 * intero K tale che la somma dei primi K interi sia minore o uguale a N. Esempio, se N=20
 * allora K risulta 5, infatti 1 + 2 + 3 + 4 + 5 = 15 mentre 1 + 2 + 3 + 4 + 5 + 6 = 21
 * @return int exitcode
 */
int main() {
    int n = 0;
    int k = 0;

    printf("Please insert an integer \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (k + i <= n) {
            k = k + i;
        }
    }

    printf("K is: %d", k);
    return 0;
}