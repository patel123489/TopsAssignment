#include <stdio.h>
main() {
    int num, month;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    // Display month name using switch
    printf("\nEnter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:  printf("Month is January\n"); 
		break;
        case 2:  printf("Month is February\n");
		break;
        case 3:  printf("Month is March\n"); 
		break;
        case 4:  printf("Month is April\n"); 
		break;
        case 5:  printf("Month is May\n"); 
		break;
        case 6:  printf("Month is June\n"); 
		break;
        case 7:  printf("Month is July\n"); 
		break;
        case 8:  printf("Month is August\n"); 
		break;
        case 9:  printf("Month is September\n"); 
		break;
        case 10: printf("Month is October\n"); 
		break;
        case 11: printf("Month is November\n"); 
		break;
        case 12: printf("Month is December\n"); 
		break;
        default: 
		printf("Invalid month number!\n");
    }
}
