#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Recursive function to calculate nCr (Combination)
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows,i,j,s;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    printf("\nPascal's Triangle using loops:\n\n");

    // Loop version to print Pascal's Triangle
    for (i = 0; i < rows; i++) {
        // Print spaces
        for (s = 0; s < rows - i - 1; s++) {
            printf("  ");
        }
        // Print numbers using nCr
        for (j = 0; j <= i; j++) {
            printf("%4d", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}
