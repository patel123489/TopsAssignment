#include<iostream>
using namespace std;

class Person {
public:
    char name[30];
    char email[30];
    long long contact;
    void setPersonData() {
        cout << "\nEnter person details:";
        cout << "\nName: ";
        cin >> name;

        cout << "Email: ";
        cin >> email;

        cout << "Contact number: ";
        cin >> contact;
    }
};
class Employee : public Person {
public:
    char empid[100];
    char joindate[20];  // ? FIXED: changed from char to char array
    void setEmployee() {
        cout << "\nEnter employee details:";
        cout << "\nEmployee ID: ";
        cin >> empid;

        cout << "Join Date (e.g., 01-08-2025): ";
        cin >> joindate;
    }
};
class Manager : public Employee {
public:
    char deptid[10];
    char deptname[20];
    void setManager() {
        setPersonData();
        setEmployee();

        cout << "\nEnter department details:";
        cout << "\nDepartment ID: ";
        cin >> deptid;

        cout << "Department Name: ";
        cin >> deptname;
    }
    void showData() {
        cout << "\n===== PERSON DETAILS =====";
        cout << "\nName = " << name;
        cout << "\nEmail = " << email;
        cout << "\nContact = " << contact;

        cout << "\n\n===== EMPLOYEE DETAILS =====";
        cout << "\nEmployee ID = " << empid;
        cout << "\nJoin Date = " << joindate;

        cout << "\n\n===== DEPARTMENT DETAILS =====";
        cout << "\nDepartment ID = " << deptid;
        cout << "\nDepartment Name = " << deptname;
    }
};
int main() {
    Manager m1;
    m1.setManager();
    m1.showData();
    return 0;
}
