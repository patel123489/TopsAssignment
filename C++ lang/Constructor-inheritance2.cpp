#include<iostream>
using namespace std;
class parent{
	public:
		parent(int a){
			cout<<"\n parent class a="<<a;
		}
};
class child:public parent{
	public:
		child(int a,int b,int c):parent(a){
			cout<<"\n child class c="<<c<<"b="<<b;
		}
};
main(){
	child c1(12,56,34);
}
