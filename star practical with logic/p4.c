#include<stdio.h>
main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1 || j==1 ||i==5 ||j==5){
				printf("\t0");
			}
			else{
			printf("\t1");				
			}
		}
		printf("\n");
	}
}
