#include <stdio.h>

int main() {
    // Part 1: One-dimensional array
    int arr[5], i;
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // Part 2: Two-dimensional array (3x3 matrix)
    int matrix[3][3], row, col, sum = 0;

    printf("\n\nEnter 3x3 matrix elements:\n");
    for(row = 0; row < 3; row++) {
        for(col = 0; col < 3; col++) {
            scanf("%d", &matrix[row][col]);
            sum += matrix[row][col];  
        }
    }
    printf("\nMatrix is:\n");
    for(row = 0; row < 3; row++) {
        for(col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    printf("Sum of all elements = %d\n", sum);
}
