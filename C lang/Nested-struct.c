#include<stdio.h>
struct subject{
	int scode;
	char sname[20];
	int marks;
};
struct student{
	int Enroll;
	char name[20];
	struct subject s1;
};
main(){
	struct student st1;
	printf("\n Enter student Enroll and name");
	scanf("%d %s",&st1.Enroll,st1.name);
	printf("\n Enter subject code name and marks");
	scanf("\n %d %s %d",&st1.s1.scode,st1.s1.sname,&st1.s1.marks);
	printf("\n subjectcode=%d",st1.s1.scode);
	printf("\n sname=%s and marks=%d",st1.s1.sname,st1.s1.marks);
}
