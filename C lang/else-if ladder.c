#include<stdio.h>
/*
  if(cond 1){}
    else if (cond 2){
     }
    else if (cond 3){
     }
    else{
}
*/
 main(){
 	  int X1,X2;
 	  printf("\n Enter X1 & X2 values");
 	  scanf("%d %d" ,&X1, &X2);
 	  
 	  if( X1>0 && X2>0){
 	  	printf("\n First");
	   }
	   
	  else if( X1<0 && X2>0){
 	  	printf("\n Second");
	   }
	   
	   else if( X1>0 && X2<0){
 	  	printf("\n Third");
	   }
	   
	   else if( X1<0 && X2<0){
 	  	printf("\n Fourth");
	   }
	   
	   	else {
	   		printf("\n center line ");
		   }
 }
