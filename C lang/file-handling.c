#include<stdio.h>
main(){
	char data[100];
	FILE *fp;
	fp=fopen("hello.txt","w");
	fprintf(fp,"hello OM");
	
	fclose(fp);
	
	//Reading
	fp=fopen ("hello.txt","r");
	fscanf(fp,"%s",data);
	
	fgets(data,20,fp);
	printf("\n read data from file=%s",data);
	
	fclose(fp);
}
