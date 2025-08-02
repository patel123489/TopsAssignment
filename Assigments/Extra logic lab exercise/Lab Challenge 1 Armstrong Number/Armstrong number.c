#include <stdio.h>
#include <math.h>

// Function to check if a number is Armstrong
int isArmstrong(int num) {
    int original = num, sum = 0, digit;
    int n = 0, temp = num;

    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;

    // Calculate the sum of each digit raised to the power n
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int number,i;

    // Part 1: Check a specific number
    printf("Enter a number to check: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    // Part 2: List all Armstrong numbers from 1 to 1000
    printf("\nArmstrong numbers between 1 and 1000 are:\n");
      for(i = 1; i <= 1000; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }

    return 0;
}

