#include<iostream>
using namespace std;
class Maths{
	public:
		int a,b;
		Maths(){ // Simple(Default)Contructor
			a=100;
			b=200;
			cout<<"\n Default Contructor called";
		}
		Maths(int x,int y){ // Parametized contructor
			  a=x;
		  	  b=y;
		}
		void show(){
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};
main(){
	Maths m1,m2;
	Maths m3(12,56);
	m3.show();
	Maths m4=m1;
	cout<<"\n m4 Data Member";
	m4.show();
}
