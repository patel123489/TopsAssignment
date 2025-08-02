#include<iostream>
using namespace std;
class Maths{
	public:
		Maths(){
			cout<<"\n Default contructors called";
		}
		void display(){
			cout<<"\n Display Method called";
		}
		~Maths(){
			cout<<"\n Destructor Method called";
		}
};
main(){
	Maths m1;
	m1.display();
}
