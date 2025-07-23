#include<stdio.h>
int main(){
	int principle,rate,time,simpleIntrest;
	
	printf("Enter the value of principle:");
	scanf("%d",&principle);
	
	printf("Enter the value of rate of intrest:");
	scanf("%d",&rate);
	
	printf("Enter the value of time (in month):");
	scanf("%d",&time);
	
	simpleIntrest=(principle*rate*time)/100;
	printf("simpleIntrest=%d\n",simpleIntrest);	
}
