#include<stdio.h>
void swap (int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\n inner function a=%d and b=%d",a,b);
}
main(){
	int a=10,b=20;
	swap(a,b);
	printf("\n a=%d and b=%d",a,b);
}
