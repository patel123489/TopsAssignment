#include<iostream>
#include<fstream>
using namespace std;
class User{
	public:
		int uid;
		char name[20];
		string data;
		
		void addUser(){
			ofstream f1;
			cout<<"\n Enter uid and uname";
			cin>>uid>>name;
			f1.open("user.csv",ios::app);
			f1<<uid<<","<<name<<"\n";
			f1.close();
		}
		
		void showUser(){
			ifstream f1;
			f1.open("user.csv",ios::in);
			while(std::getline(f1,data)){
				cout<<data<<"\n";
			}
			f1.close();
		}
};
main(){
	User u1;
	u1.addUser();
	u1.showUser();
	User u2;
	u2.addUser();
	u2.showUser();
}
