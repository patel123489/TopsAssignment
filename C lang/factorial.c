#include<stdio.h>
int factfind (int num){
	 if (num==1){
	 	return;
	 }
	 int f=num*factfind(num-1);
	 return f;
}
main(){
	printf("\n fact of 5=%d",factfind(5));
}
