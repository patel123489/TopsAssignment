#include <iostream>
using namespace std;
main() {
    // Implicit type conversion (Type Promotion)
    int numInt = 10;
    double numDouble = numInt;  // int ? double automatically
    cout << "--- Implicit Type Conversion ---" << endl;
    cout << "Integer value: " << numInt << endl;
    cout << "Converted to double: " << numDouble << endl;
    
    
    // Explicit type conversion (Type Casting)
    double pi = 3.14159;
    int intPi = (int)pi; // Old C-style casting
    int intPi2 = static_cast<int>(pi); // Modern C++ casting
    cout << "\n--- Explicit Type Conversion ---" << endl;
    cout << "Double value: " << pi << endl;
    cout << "Converted to int (C-style): " << intPi << endl;
    cout << "Converted to int (static_cast): " << intPi2 << endl;
    
    
    // Mixed operation showing implicit conversion
    int x = 5;
    double y = 2.5;
    double result = x + y;
    cout << "\n--- Mixed Operation ---" << endl;
    cout << "x + y = " << result << endl;
}
