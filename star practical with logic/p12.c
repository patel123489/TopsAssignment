#include<stdio.h>

main(){
	int a,b;
	for(a=1;a<=5;a++){
		for(b=1;b<=a;b++){
			
			if(a% 2==1)
			printf(" 1");
			
			else  
			printf(" 0");
		}
		printf("\n");
	}
}
