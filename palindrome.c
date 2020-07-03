#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "usage: palyndrome [word]");
        exit(1);
    }

    int len = strlen(argv[1]);
    char reversed[len];
    char *string = calloc(len, sizeof(char));
    strcpy(string, argv[1]);

    for (int i = len - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = string[i];
    }

    reversed[len] = '\0';

    if (strncmp(string, reversed, len) == 0) {
        printf("The string is palindrome! %s\n", reversed);
        return 0;
    }

    printf("The string is not palindrome. Input: %s, Reversed: %s\n", string, reversed);
    exit(1);
}