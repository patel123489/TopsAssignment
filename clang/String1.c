#include<stdio.h>
main(){
	char str[20],rev[20];//tops tech
	int i=0,j=0;
	printf("\n Enter the str");
	gets(str);
	
	while (str[i] !='\0'){
		i++;
	}
	printf("\n length of str=%d",i);
	i--;
	while(i>=0){
		rev[j]=str[i];
		printf("\n i=%d ch=%c i=%d rev=%c",i,str[i],j,rev[j]);
		i--;
		j++;
	}
	rev[j]='\0';
	printf("\n rev str=%s",rev);
}
