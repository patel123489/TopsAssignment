#include <stdio.h>

int main() {
    int num, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 0; 
    } else {
        while (num != 0) {
            digit = num % 10;           
            if (digit % 2 != 0) {
                count++;               
            }
            num = num / 10;             
        }
    }

    printf("Total odd digits = %d\n", count);
    return 0;
}

