#include<stdio.h>
main(){
	int num;
	printf("\n Enter the number");
	scanf("%d",&num);
	
	if (num%2==0){
		goto Even;
	}
	else{
		goto Odd;
	}
	
	Even:{
		printf("\n %d is Even",num);
		return;
	}
	
	Odd:{
		printf("\n %d is Odd",num);
		return;
	}
}
