#include<iostream>
#include<string.h>
using namespace std;
class user{
	public:
		int uid;
		char uname[20];
		user(int uid,char uname[20]){
		     this->uid=uid;
			 strcpy(this->uname,uname);	
		}
		void Showuser(){
			cout<<"\n uid="<<uid<<"\t username="<<uname;
		}
};
main(){
	user u1(101,"Patel");
	u1.Showuser();
	user u2(102,"Om");
	u2.Showuser();
}
