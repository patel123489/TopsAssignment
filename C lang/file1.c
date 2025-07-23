#include<stdio.h>
main(){
	char data[50],ch;
	FILE *fp;
	fp=fopen("test.text","w");
	/*
	multiline write str in file
	*/
	fputs("hello world\nwelcome to tops tech ",fp);
	// single char wrtie
	// fputs ('c',fp);
	//fprintf(fp,"Hello world");
	fclose(fp);
	
	fp=fopen("test.text","r");
	//fscanf(fp,"%s",data);
	//single char write 
	//ch=fgetc(fp);
	//printf("\n cing char=%c",ch);
	//printf("\n output=%s",data);
	/*
		multiline str reading from file
	*/
	fgets(data,50,fp);
	printf("\n data from file=\n");
	puts(data);
	fclose(fp);
}
