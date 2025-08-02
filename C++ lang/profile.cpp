#include <iostream>
using namespace std;
class Student{
public:
    string name;
    string contact;
    string email;
    string address;
    
    void getData() {
        cout<<"\nEnter The Name:";
        cin>>name;
        cout<<"Enter  The Email:";
        cin>>email;
        cout<<"Enter  The Address:";
        cin>>address;
        cout<<"Enter contact:";
        cin>>contact;
    }

    void display() {
    	cout<<"\n===============";
    	cout<<"                 ";
        cout<<"\nName:"<<name;
        cout<<"\nEmail:"<<email;
        cout<<"\nAddress:"<<address;
        cout<<"\ncontact:"<<contact;
        cout<<"                 ";
        cout<<"\n===============";
    }
};
main() {
    Student students[4];

    cout << "Enter details for 4 students:\n";
    for (int i = 0; i < 4; i++) {
        cout << "\nStudent " << (i + 1) << ":\n";
        students[i].getData();
    }

    int choice;
    cout << "\nEnter student number (1-4) to display their information: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        cout << "\nDetails of Student " << choice << ":\n";
        students[choice - 1].display();
    } 
	else {
        cout << "\nInvalid Student Number! Please Enter valid Student Number!";
    }
}
