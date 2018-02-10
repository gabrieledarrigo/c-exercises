#include <stdio.h>

int main() {
    int m[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6},
        {7, 8, 9}
    };

    int n[2][3] = {
        {1, 2, 3}, 
        {4, 5, 6}
    };

    int rows = sizeof(m) / sizeof(m[0]);
    int columns = sizeof(m[0]) / sizeof(int);

    printf("Rows are: %i\n", rows);
    printf("Columns are: %i\n\n", columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            //printf(" %i ", m[i][j]);

            if (i == j) {
                printf(" %i ", m[i][j]);
            }


        }

        // printf("\n");
    }

    printf("\n");
}