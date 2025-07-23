#include<stdio.h>
main(){
	char name[10]={'O','M','\0'},str[20],str2[20];
	
	printf("\n name=%s",name);
	printf("\n Enter str1");
	scanf("%s",str);
	printf("\n str=%s",str);
	printf("\n str=%s",str2);
	
	gets(str2);
	puts(str2);
}
