#include<iostream>
using namespace std;
template <typename T>
T   add( T  a, T b){
	cout<<"\n addition of="<<a<<"and"<<b<<"="<<a+b;
}
main(){
	add<int>(18,9);
	add<float>(14.01,6.01);
}
