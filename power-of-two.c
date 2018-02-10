#include <stdio.h>
#include <stdlib.h>

#define N 9

int power(int number, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= number;
    }

    return result;
}


int main() {
    int i = 0;
    int base;
    int exponent;

    printf("Please enter an integer number for the base: \n");
    scanf("%i", &base);

    printf("Please enter an integer number for the exponent: \n");
    scanf("%i", &exponent);

    exponent++;
    int data[exponent];

    while (i < exponent) {
        if (i == 0) {
            data[0] = 1;
        } else {
            data[i] = power(base, i);
        }

        i++;
    }

    printf("TABLE OF POWERS OF %i\n", base);

    for (int k = 0; k < exponent; k++) {
        printf("%i to the power of %i is\t %i\n", base, k, data[k]);    
    }

}