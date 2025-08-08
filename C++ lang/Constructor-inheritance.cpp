#include<iostream>
using namespace std;
class parent{
	public:
		parent(){
			cout<<"\n parent class con. called";
		}
};
class child:public parent{
	public:
		child(){
			cout<<"\n child class con. called";
		}
};
main(){
	child c1;
}
