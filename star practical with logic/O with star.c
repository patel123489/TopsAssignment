#include <stdio.h>

main() {
    int i, j;
    int size = 5; 

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            
            if ((i == 0 || i == size - 1) && (j > 0 && j < size - 1))
                printf("*");

            else if ((j == 0 || j == size - 1) && (i > 0 && i < size - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
