#include<iostream>
#include<string.h>
using namespace std;
class StaticExample{
	public:
		static char title[100];
};

char StaticExample::title[100]="Tops Tech";

main(){
	StaticExample s1,s2,s3;
	cout<<s3.title;
	cout<<"\n"<<s1.title;
}
