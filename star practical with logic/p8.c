#include<stdio.h>
main(){
	int i,j,s;
	for(i=1;i<=5;i++){
		for(s=1;s<=5-i;s++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
			printf("\n");
	}
	
	for(i=4;i>=1;i--){
		for(s=4;s>=i;s--){
			printf(" ");
		}
		for(j=i*2-1;j>=1;j--){
			printf("*");
		}
			printf("\n");
	}
	
}
