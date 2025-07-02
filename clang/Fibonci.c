#include<stdio.h>
main(){
	int X1=0,X2=1,ans,i;
	printf("%d, \t %d",X1,X2);
	
	for(i=1;i<=10;i++){
		ans=X1+X2;
		printf("\t %d,",ans);
		X1=X2;
		X2=ans;
	}
}
