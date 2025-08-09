#include <iostream>
using namespace std;
//=======================
// Procedural Oriented Programming(POP)
//=======================
void calcArea_POP() {
    float length, width, area;
    cout << "\n---Procedural Oriented Programming(POP)---";
    cout << "\nEnter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    area = length * width;
    cout << "Area (POP) = " << area << endl;
}
//=======================
//Object-Oriented Programming(OOP)
//=======================
class Rectangle {
    float length, width;
public:
    void input() {
        cout << "\n---Object-Oriented Programming(OOP ---";
        cout << "\nEnter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
    void displayArea() {
        cout << "Area (OOP) = " << (length * width) << endl;
    }
};
main() {
    // POP Example
    calcArea_POP();
    // OOP Example
    Rectangle r;
    r.input();
    r.displayArea();
}
