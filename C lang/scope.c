#include<stdio.h>
int i=1,a;//Global variable
void swap(int a,int b){// a and b Formal parameter
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\n Inner Function a=%d and b=%d",a,b);
}
void display(){
	printf("\n In Function i=%d",i);
}
main(){
	{
		printf("\n i=%d",i);
		int X=10;//Local variable
	
    }
	display();
	swap(12,3);
	printf("\n a=%d",a);
}
