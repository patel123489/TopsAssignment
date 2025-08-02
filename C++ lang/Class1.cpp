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
	Student s1;
	s1.getStudentData();
	s1.showStudentData();
}
