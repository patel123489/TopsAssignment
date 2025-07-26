#include <stdio.h>
main() {
    int choice, quantity;
    float total = 0;
    char continueOrder;

    printf("======== WELCOME TO FOOD BILLING SYSTEM ========\n");
    printf("======== MENU ========\n");
    printf("Code\tItem\t\tPrice\n");
    printf("1\tPizza\t\tRs. 180\n");
    printf("2\tBurger\t\tRs. 150\n");
    printf("3\tPasta\t\tRs. 140\n");
    printf("4\tSandwich\tRs. 120\n");
    printf("5\tCoffee\t\tRs. 100\n");

    do {
        // Taking user choice
        printf("\nEnter the code of the item you want to order: ");
        scanf("%d", &choice);

        // Taking quantity
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        // Using switch-case to calculate bill based on selection
        switch(choice) {
            case 1:
                total += 180 * quantity;
                break;
            case 2:
                total += 150 * quantity;
                break;
            case 3:
                total += 140 * quantity;
                break;
            case 4:
                total += 120 * quantity;
                break;
            case 5:
                total += 100 * quantity;
                break;
            default:
                printf("Invalid choice! Please enter a valid code.\n");
        }
        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &continueOrder);

    } while (continueOrder == 'y' );

    // Final bill output
    printf("\n=====================================\n");
    printf("Total Bill Amount = Rs. %.2f\n", total);
    printf("Thank you for ordering!\n");
    printf("=====================================\n");
}
