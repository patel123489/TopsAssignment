#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    void setPersonData(string n, int a) {
        name = n;
        age = a;
    }
    void displayPersonData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
class Student : public Person {
public:
    string course;
    void setStudentData(string n, int a, string c) {
        setPersonData(n, a);
        course = c;
    }
    void displayStudentData() {
        displayPersonData();
        cout << "Course: " << course << endl;
    }
};
class Teacher : public Person {
public:
    string subject;
    void setTeacherData(string n, int a, string s) {
        setPersonData(n, a);
        subject = s;
    }
    void displayTeacherData() {
        displayPersonData();
        cout << "Subject: " << subject << endl;
    }
};
main() {
    Student s;
    s.setStudentData("Patel Om", 20, "Information Technogoly");
    s.displayStudentData();
    Teacher t;
    t.setTeacherData("Mr. Bob", 45, "Mathematics");
    t.displayTeacherData();
}
