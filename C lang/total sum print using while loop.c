#include <stdio.h>

int main() {
    int start, end, sum = 0;


    printf("Enter the Start Number: ");
    scanf("%d", &start);
    
    printf("Enter the End Number: ");
    scanf("%d", &end);

    while (start <= end) {
        sum += start;
        start++;
    }
    
    printf("Total Sum of the series: %d\n", sum);

    return 0;
}

