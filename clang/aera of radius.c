#include<stdio.h>
 int main(){
	float circleAera,radius;
	float length,width,rectangleAera;
	float side,squareAera;
	float pi=3.14;
	float square=side*side;
	float rectangle=length*width;
	
	printf("\n enter the value of radius circle:");
	scanf("%f",&radius);
	circleAera=pi*radius*radius;
	printf("aera of circle =%.2f\n",circleAera);	
	
	printf("\n enter the value side of square:");
	scanf("%f",&side);
	squareAera = side*side;
	printf(" aera of square=%.2f\n",squareAera);	
	
	printf("\n enter the value  length and breadth of rectangle:");
	scanf("%f %f",&length,&width);
	rectangleAera= length*width;
	printf(" aera of rectangle=%.2f\n",rectangleAera);
	
	
}
