#include<iostream>
using namespace std;
class users{
	public:
		static int objCount;
		users(){
			users::objCount++;
		}
		static void Print(){
			cout<<"\n Total object="<<users::objCount;
		}
};

int users::objCount=0;

main(){
	users u1,u2,u3,u4;
	cout<<"\n u1.count="<<u1.objCount;
	users::objCount;
}
