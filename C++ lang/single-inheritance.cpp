#include<iostream>
using namespace std;
class category{
	public:
		char catid[10];
		char catname[20];
		void getcatdata(){
			cout<<"\n Enter category id and name:";
			cin>>catid>>catname;
		}
};
class product:public category{
	public:
		int pid;
		char pname;
		float price;
		void getproduct(){
			cout<<"\n Enter pid pname price";
			cin>>pid>>pname>>price;
		}
		void showProduct(){
			cout<<"\n pid="<<pid;
			cout<<"\n pname="<<pname;
			cout<<"\n price="<<price;
			cout<<"\n catid="<<catid<<"\t catname="<<catname;
		}
};
main(){
	product p1;
	p1.getcatdata();
	p1.getproduct();
	p1.showProduct();
}
