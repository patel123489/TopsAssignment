#include<stdio.h>
main(){
	int age=1;

	printf("Enter your age here:");

	scanf("%d",&age);

	if(age>=18) {
		printf("you are eligible to vote \n");
	}
	else{
		printf("you are not eligible to vote \n");
	}
}
