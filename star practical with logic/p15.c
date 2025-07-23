#include<stdio.h>

main(){
	int a,b,n='a';
	for(a=1;a<=5;a++){
		for(b=1;b<=a;b++){
			printf(" %c",n);
			n++;
		}
		printf("\n");
	}
}
