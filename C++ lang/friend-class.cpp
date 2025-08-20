#include<iostream>
using namespace std;
class Child;
class Parent{
	private:
		int a,b;
	public:
		Temp(){
			a=12;
			b=34;
		}
		friend class Child;
};
class Child{
	public:
		Child(Parent t1){
			cout<<"\n Parent class private data access";
			cout<<t1.a;
		}
};
main(){
	Parent t1;
	Child c1(t1);
}
