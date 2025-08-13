#include<iostream>
using namespace std;
class Mathsclass{
	public:
		void add(int a,int b){
			cout<<"\n Addition of"<<a<<"and"<<b<<"="<<a+b;
		}
		void add(int a,float b,float c){
			cout<<"\n Addition of="<<a+b+c;
		}
};
main(){
	Mathsclass m1;
	m1.add(12,60);
	m1.add(12,12.3,12.8);
}
