#include <iostream>
using namespace std;
main(){
    int rows;
    cout << "Enter number of rows for the triangle: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++){        
        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl; // Move to next line after each row
    }
}
