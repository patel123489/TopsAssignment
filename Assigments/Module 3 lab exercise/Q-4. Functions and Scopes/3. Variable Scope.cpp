#include <iostream>
using namespace std;
int GlobalVar = 100; // Global variable
void displayScope() {
    int localVar = 50; // Local variable to this function
    cout<<"Inside function-Global:"<<GlobalVar<<",Local:"<<localVar<< endl;
}
main(){
    int localVar = 10; // Local to main()
    cout<<"Inside main-Global:"<<GlobalVar<<",Local:"<<localVar<< endl;
    displayScope();
}
