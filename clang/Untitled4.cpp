#include <stdio.h>

int main() {
    int start, end, n, count = 0;

    // Input
    printf("Enter the start number:");
    scanf("%d", &start);

    printf("Enter the end number:");
    scanf("%d", &end);

    printf("Enter how many numbers to generate:");
    scanf("%d", &n);

    printf("\nGenerated number series:");

    int current = start;
    while (count < n && current <= end) {
        printf("%d ", current);
        current++;
        count++;
    }

    // If end is smaller than needed
    if (count < n) {
        printf("\n Only %d numbers could be printed within the range.", count);
    }

    return 0;
}

