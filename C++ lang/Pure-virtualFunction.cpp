#include<iostream>
using namespace std;

class Parent{  //=========Abstract============
	public:
		virtual void display()=0; //Pure-virtual method
		void PrintHello(){
			cout<<"\n Hello!Tops Tech";
		}
};
class Child:public Parent{
	public:
		void display(){
			cout<<"\n Child class method";
		}
};
main(){
	Child c1;
	c1.display();
	c1.PrintHello();
}
