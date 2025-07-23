#include<stdio.h>
/*
switch(choice)
{
	case1:
	//block
break;
case 2:
	//block
break;

 //block
 break;
}
*/
main(){
	int r,l,b,areaRect,p,rate,n,choice;
	float areaCircle, I;
	printf("\n press 1 for area of circle");
	printf("\n press 2 for area of rect");
	printf("\n press 3 for area of intrest");
	printf("\n enter your choice: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("\n Enter the Radius");
			scanf("%d",&r);
			areaCircle= 3.14*r*r;
			printf("\n area of circle=%f",areaCircle);
		break;
		case 2:
			printf("\n Enter l and b");
			scanf("%d %d",&l,&b);
			areaRect=l*b;
			printf("\n area of rect=%d",areaRect);
		break;
		case 3:
			printf("\n Enter Principle, rate, no of year");
			scanf("%d %d %d" ,&p,&rate,&n);
			I=(p*n*rate)/100;
			printf("\n Simple intrest=%f",I);
		break;
		default :
		printf("wrong Choice");
		break;	
				
	}
}
