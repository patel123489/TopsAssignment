#include <iostream>
using namespace std;
main(){
    // Constant declaration
    const double PI = 3.14159;
    // Variable declarations
    int age = 20;
    float height =6.0;
    char grade = 'A';
    string name = "Patel Om";
    double radius = 7.5;
    // Performing operations
    double area = PI * radius * radius;
    age = age + 2;
    // Display values
    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area of Circle: " << area << endl;
    cout << "PI (Constant) = " << PI << endl;
}
