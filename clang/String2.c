#include<stdio.h>
int i,j,k;
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
void multiply(int a[2][2], int b[2][2], int d[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			d[i][j] = 0;
			for(k=0; k<2; k++){
				d[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
main(){
	int a[2][2],b[2][2],c[2][2],d[2][2];
	getArray(a);
	getArray(b);
	showArray(a);
	showArray(b);
	add(a,b,c);
	showArray(c);
	multiply(a, b, d);
	showArray(d);
}
