#include <iostream>
using namespace std;
main(){
    int number;
    cout<<"Enter a number:";
    cin>>number;
    cout<<"\n Multiplication Table of"<<number<<":\n";
    for (int i=1; i<=10; i++) {
        cout<<number<<"x"<<i<<"="<<(number*i)<<endl;
    }
}
