#include<stdio.h>
main(){
	int i,sum=0,max=0,min;
	//datatype arrayname[size]
	int a[5];
	for(i=0;i<5;i++){
		printf("\n Enter a[%d]",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
		
		if(max<a[i]){
			max=a[i];
		}
		
		if(min>a[i]){
			min=a[i];
		}
	}
	for(i=0;i<5;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
	printf("\n sum of all array element=%d",sum);
	printf("\n maximun number in array element=%d",max);
	printf("\n Minimum number in array element=%d", min);
}
