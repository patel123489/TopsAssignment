#include<stdio.h>
int main(){
	int a,b;
	
	printf("enter the first number (a):");
	scanf("%i",&b);
	
	printf("enter the second number (b):");
	scanf("%i",&a);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a=%i\n",b);
	printf("b=%i\n",a);
	
}
