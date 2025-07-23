#include<stdio.h>
// without return type without parameter
void display (){
	printf("\n display function call");
    }
// without return type with parameter
void areaRect (int l,int b){
	int area =l*b;
	printf("\n area of rect =%d",area); 
    }
// with return type without parameter
int cube (){
	int num;
	printf("\n Enter the number");
	scanf("%d",&num);
	return num*num*num;
    }
// with return type with parameter
float areacricle (int r){
	return(3.14*r*r);
    }
main(){
    display();
	areaRect(2,6);
	int c=cube();
	printf("\n cube=%d",c);
	float area =areacricle(3);
	printf("\n area of cricle =%f",area);	
	}
