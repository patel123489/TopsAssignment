#include<iostream>
using namespace std;
class Student{
	 public:
	 	int enroll;
	 	char name[20];
	 	char email[30];
	 	
	 	void getStudentData(){
	 		cout<<"\n Enter enroll name email";
	 		cin>>enroll>>name>>email;
		 }
		void showStudentData(){
			cout<<"\n enroll="<<enroll;
			cout<<"\n name="<<name;
			cout<<"\n email="<<email;
		}
};
main(){
	Student s[2];
	for(int i=0;i<2;i++){
		cout<<"\n Enter Student Data of"<<i+1;
		
		s[i].getStudentData();
	}
	for(int i=0;i<2;i++){
		cout<<"\n show Student Data of"<<i+1;
		
		s[i].showStudentData();
	}
}
