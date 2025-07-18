#include<stdio.h>
#include<string.h>
main(){
	char str[30],str2[10];
	printf("\n Enter string:");
	scanf("%s",str);
	printf("\n length of str %s=%d \n",str,strlen(str));
	strrev(str);
	puts(str);
	strupr(str);
	printf("\n uppercase=%s",str);
	strlwr(str);
	printf("\n lowercase=%s",str);
	strcpy(str2,str);
	printf("\n copy=str=%s",str2);
	printf("\n strcmp=%d",strcmp("mbc","abc"));
}
