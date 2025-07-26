#include<stdio.h>
main(){
	FILE *fp;
	int enroll,i;
	char name[20],email[30],ch;
	fp=fopen("student.csv","w");
	for(i=1;i<=3;i++){
		printf("\n Enter enroll name and email");
		scanf("%d %s %s",&enroll,name,email);
		fprintf(fp,"%d,%s,%s \n",enroll,name,email);
	}
	fclose(fp);
	
	fp=fopen("student.csv","r");
	while((ch=fgetc(fp))!=EOF){
		if(ch==','){
			printf("\t");
			continue;
		}
		printf("%c",ch);
	}
}
