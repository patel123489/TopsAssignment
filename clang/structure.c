#include<stdio.h>
struct student{
	int enroll;
	char name[20];
	char email[20];
};
main(){
	struct student s1={101,"Malay","m@gamil.com"};
	printf("\n Enroll=%d",s1.enroll);
	printf("\n name=%s",s1.name);
	printf("\n email=%s",s1.email);
}
