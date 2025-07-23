#include <stdio.h>

main() {
	int i, j, n = 5 , m = 5	;
			for (i = 1 ;i <= 5; i++) {
				for ( j = 1; j <= 9; j++) {
			if(j > n && j < m)
					printf(" ");
				else
				 printf("*");
			}
			n--;
			m++;
			printf("\n");
		}
}
