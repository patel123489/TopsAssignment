#include <stdio.h>

int main() {
    int num, digit, min = 9;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        min = 0;
    } else {
        while (num != 0) {
            digit = num % 10;         
            if (digit < min) {
                min = digit;          
            }
            num = num / 10;           
        }
    }

    printf("Minimum digit = %d\n", min);
}

