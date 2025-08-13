#include<iostream>
using namespace std;
class parent{
	public:
/*virtual*/ void display(){
			cout<<"\n Parent class method called:";
		}
};
class Child:public parent{
	public:
		void display(){
			cout<<"\n Child class Method called:";
		}
};
main(){
	Child c1;
	c1.display();
	//parent p1;
	//p1.display();
}
