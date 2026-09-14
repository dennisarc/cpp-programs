#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    Student() {
        cout<<"Enter Roll no: "<<endl;
        cin>>rollNo;
        cout<<"Enter Name: "<<endl;
        cin>>name;
        cout<<"Enter Marks: "<<endl;
        cin>>marks;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;  
    s.display();

    return 0;
}