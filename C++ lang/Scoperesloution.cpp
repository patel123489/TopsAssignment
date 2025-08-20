#include<iostream>
using namespace std;
int x=10;
class Temp{
	public:
		void display();
};
class X{
	public:
		int x;
		X(){
			x=10;
		}
		class Y{
			public:
				int y;
				Y(){
				cout<<::x;
				y=20;	
				}
		};
};
void Temp::display(){
	cout<<"\n Method define outside the class";
}
main(){
	cout<<::x;
	Temp t1;
	t1.display();
}
