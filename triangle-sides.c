#include <stdio.h>

/**
 * Scrivere un programma che presi in ingresso 3 numeri indicanti 3 lati di un triangolo valuti
 * se i 3 numeri corrispondono effettivamente a 3 lati di un ipotetico triangolo e poi determini
 * di che triangolo si tratta.
 * @return int exitcode
 */
int main() {
    int a;
    int b;
    int c;

    printf("Please insert the value of the three triangle's sides: \n");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        if (a == b && b == c) {
            printf("The three sides are valid sides of an equilateral triangle");
        } else if (a == b || a == c || b == c) {
            printf("The three sides are valid sides of an isosceles triangle");
        } else {
            printf("The three sides are valid sides of a scalene triangle");
        }
    } else {
        printf("The three sides are not valid sides of a triangle");
    }

    return 0;
};
