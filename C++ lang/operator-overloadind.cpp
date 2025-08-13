#include<iostream>
using namespace std;
class Maths{
	public:
		int a,b;
		Maths(int a=0,int b=0){
			this->a=a;
			this->b=b;
		}
		Maths operator +(Maths &m2){
			Maths m;
			m.a=a+m2.a;
			m.b=b+m2.b;
			
			return m;
		}
		void display(){
			cout<<"\na="<<a<<"\t b="<<b;
		}
};
main(){
	Maths m1(1,2);
	m1.display();
	Maths m2(3,4);
	m2.display();
	Maths m4(2,4);
	m4.display();
	Maths m3=m1+m2+m4;
	m3.display();
}
