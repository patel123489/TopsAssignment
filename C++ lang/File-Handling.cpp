#include<iostream>
#include<fstream>
using namespace std;
main(){
	string data;
	ofstream f1;
	f1.open("demo.text",ios::out);
	f1<<"Hello World";
	f1.close();
	
	ifstream f2;
	f2.open("demo.text",ios::in);
//	f2>>data;
//	f2.getline(data,100);
	while(std::getline(f2,data)){
		cout<<data<<endl;
	}
	f2.close();
}
