#include<stdio.h>
struct Student{
	int enroll;
	char name[20];
	char email[20];
};
main(){
	struct Student s[3];
	int i;
	for(i=0;i<3;i++){
		printf("\n Enter enroll Name email of %d",i+1);
		scanf("%d %s %s",&s[i].enroll,s[i].name,s[i].email);
	}
	for(i=0;i<3;i++){
	printf("\n student info of=%d",i+1);
	printf("\n Enroll=%d",s[i].enroll);
	printf("\n name=%s",s[i].name);
	printf("\n Email=%s",s[i].email);
	}
}
