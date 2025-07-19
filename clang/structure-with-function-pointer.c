#include<stdio.h>
struct user{
	char name[20];
	int uid;
};
void getuser(struct user *u1){
	printf("\n Enter the uid and name");
	scanf("%d %s",&u1->uid,u1->name);
}
void showuser(struct user *u1){
	printf("\n uid=%d \t username=%s",u1->uid,u1->name);
}
main(){
	struct user u1,u2,u3;
	getuser(&u1);
	showuser(&u1);
	getuser(&u2);
	showuser(&u2);
}
