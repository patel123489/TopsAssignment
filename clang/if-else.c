#include <stdio.h>
/*
if (condition){
}
else
{}

*/

main () {
     int num;
		printf("\n Enter the num:- ");
     	scanf("%d", &num);
     if (num % 2 == 0) {
         printf("\n %d is even", num);
      }
     else {
        printf("\n %d is odd", num);
     }
}
