#include<iostream>
using namespace std;
template <typename T>
class Sort{
	public:
		T a[5];
		int i,j,temp;
		T getArray(){
			for(i=0;i<5;i++){
				cout<<"\n Enter a["<<i<<"]=";
				cin>>a[i];
			}
		}
		T sortArray(){
			for(i=0;i<5;i++){
				for(j=i+1;j<5;j++){
					if(a[i]>a[j]){
						temp = a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
		}
		T printArray(){
				for(i=0;i<5;i++){
				cout<<"\n Enter a["<<i<<"]="<<a[i];	
			}
		}
};
main(){
	Sort<int> int1;
	int1.getArray();
	int1.sortArray();
	int1.printArray();
	
	Sort<char> char1;
	char1.getArray();
	char1.sortArray();
	char1.printArray();
}
