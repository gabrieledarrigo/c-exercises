#include <stdio.h>
#include <string.h>
#define LEN 8

int main() {
    char str[LEN + 1];
    char reversed[LEN + 1];

    printf("Please insert a string with a maximum lenght of %i characters.\n", LEN);
    scanf("%s", str);

    printf("The string is: %s \n", str);

    for (int i = LEN - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = str[i];

        printf("i is: %i j is: %i\n", i, j);
        printf("str[%i]: %c \n", i, str[i]);
        printf("reversed[%i]: %c \n", j, reversed[j]);
    }

    reversed[LEN] = '\0';
    printf("\n");
    printf("Reversed string is %s: \n", reversed);
}