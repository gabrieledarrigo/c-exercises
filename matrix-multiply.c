#include <stdio.h>

int main() {
    int m[2][2] = {
        {1, 2}, 
        {4, 5}
    };

    int n[2][2] = {
        {1, 2}, 
        {3, 4}
    };

    int product = 0;
    int rows = sizeof(m) / sizeof(m[0]);
    int columns = sizeof(m[0]) / sizeof(int);

    printf("Rows are: %i\n", rows);
    printf("Columns are: %i\n\n", columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("m[%i][%i] = %i; n[%i][%i] = %i; product is %i\n", i, j, m[i][j], j, i, n[j][i], (m[i][j] * n[j][i]));
            product += m[i][j] * n[j][i];
        }
    }

    printf("Matrix product is: %i\n", product);
}