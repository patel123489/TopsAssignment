#include <stdio.h>
main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Arithmetic operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition (a + b) = %d\n", a + b);
    printf("Subtraction (a - b) = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);
    printf("Division (a / b) = %d\n", b != 0 ? a / b : 0); 
    printf("Modulus (a %% b) = %d\n", b != 0 ? a % b : 0);

    // Relational operations
    printf("\n--- Relational Operations ---\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical operations
    printf("\n--- Logical Operations ---\n");
    printf("a && b (AND) = %d\n", a && b);
    printf("a || b (OR) = %d\n", a || b);
    printf("!a (NOT a) = %d\n", !a);
    printf("!b (NOT b) = %d\n", !b);
}
