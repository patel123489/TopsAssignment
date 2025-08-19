#include <iostream>
using namespace std;
main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        cout << "Grade: A+";
    }
    else if (marks >= 80) {
        cout << "Grade: A";
    }
    else if (marks >= 70) {
        cout << "Grade: B";
    }
    else if (marks >= 60) {
        cout << "Grade: C";
    }
    else if (marks >= 50) {
        cout << "Grade: D";
    }
    else if (marks >= 0) {
        cout << "Grade: Fail";
    }
    else {
        cout << "Invalid marks entered!";
    }
}
