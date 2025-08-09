#include <iostream>
using namespace std;
main() {
    int a = 18, b = 9;
    // Arithmetic Operators
    cout << "--- Arithmetic Operators ---" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;


    // Relational Operators
    cout << "\n--- Relational Operators ---" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;


    // Logical Operators
    bool x = true, y = false;
    cout << "\n--- Logical Operators ---" << endl;
    cout << "x && y : " << (x && y) << endl;
    cout << "x || y : " << (x || y) << endl;
    cout << "!x     : " << (!x) << endl;

    // Bitwise Operators
    cout << "\n--- Bitwise Operators ---" << endl;
    cout << "a & b  : " << (a & b) << endl;  // AND
    cout << "a | b  : " << (a | b) << endl;  // OR
    cout << "a ^ b  : " << (a ^ b) << endl;  // XOR
    cout << "a << 1 : " << (a << 1) << endl; // Left Shift
    cout << "a >> 1 : " << (a >> 1) << endl; // Right Shift
}
