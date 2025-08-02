#include<iostream>
using namespace std;
class Maths{
	public:
		int a,b,c,d,e;
		Maths(){
			a=10;
			b=20;
			c=30;
			d=40;
			e=50;
		}
		Maths(int x,int y){
			a=x;
			b=y;
		}
};
main(){
	Maths m1;
	cout<<"\n size of m1="<<sizeof(m1);
	Maths *m2 = new Maths(90,78);
	cout<<"\n size of m2="<<sizeof(m2);
}
