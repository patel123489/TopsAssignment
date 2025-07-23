#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the start number: ");
    scanf("%d", &start);

    printf("Enter the end number: ");
    scanf("%d", &end);

    printf("\n  Number series:\n");

    while (start <= end) {
        printf("%d ", start);
        start++;
    }
}

