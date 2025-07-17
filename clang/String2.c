#include<stdio.h>
int i,j;
void getArray(int a[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void showArray(int a[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t a[%d][%d]=%d",i,j,a[i][j]);
		}
		printf("\n");
	}
}
void add(int a[2][2],int b[2][2],int c[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
main(){
	int a[2][2],b[2][2],c[2][2];
	getArray(a);
	getArray(b);
	showArray(a);
	showArray(b);
	add(a,b,c);
	showArray(c);
}
