#include<stdio.h>
main(){
	int a[2][2]={12,34,56,78};
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t a[%d][%d]=%d",i,j,a[i][j]);
		}
		printf("\n");
	}
}
