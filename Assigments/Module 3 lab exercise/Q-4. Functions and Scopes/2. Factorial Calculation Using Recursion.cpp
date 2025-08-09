#include <iostream>
using namespace std;
// Recursive function
long long factorial(int n) {
    if (n <= 1) return 1; // Base case
    return n * factorial(n - 1); // Recursive call
}
main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) 
        cout << "Factorial Is Not Defined For Negative Numbers." << endl;
    else
        cout << "Factorial of " << num << " = " << factorial(num) << endl;
}
