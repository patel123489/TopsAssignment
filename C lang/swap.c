#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("enter the first number (a):");
	scanf("%i",&a);
	
	printf("enter the secound number (b):");
	scanf("%i",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("after swapping:\n");
	printf("a=%i\n",a);
	printf("b=%i\n",b);
}
