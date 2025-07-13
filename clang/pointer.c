#include<stdio.h>
main(){
	int a=10;
	int *ptr;
	ptr=&a;
	printf("\n ptr value=%d",*ptr);
	
	*ptr=20;
	printf("\n a=%d",a);
}
