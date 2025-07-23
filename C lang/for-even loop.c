#include <stdio.h>

int main() {
    int i,start,end;

    printf("Enter the start number: ");
    scanf("%d", &start);

    printf("Enter the end number: ");
    scanf("%d", &end);

    printf("Even numbers in the range %d to %d:\n", start, end);

    for (i = start;i <= end; i += 2) {
        printf("%d ", i);
    }
}

