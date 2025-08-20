#include<iostream>
using namespace std;
class Temp{
	private:
		int a,b;
	public:
		Temp(){
			a=12;
			b=34;
		}
		friend void add(Temp);
};
void add(Temp t1){
	cout<<"\n access private data member of class";
	cout<<"\n a="<<t1.a<<"\t b="<<t1.b;
}
main(){
	Temp t1;
	add(t1);
}
