#include<stdio.h>

main(){
	int i,b;
	
	printf("\n Enter the Start Number:");
	scanf("%d",&i);
	
	printf("\n Enter the End Number:");
	scanf("%d",&b);
	
	while (i % 2 != 0) {
        i++;  
    }
    
    printf("Even numbers in the series:\n");
    
     while (i <= b){
	  printf("%d ", i);
        i += 2;
	 } 
	 
 }
