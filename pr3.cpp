#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;

public:
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Student Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "\nStudent Details:" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    // Creating Student object dynamically
    Student *s = new Student;

    // Taking and displaying data
    s->getData();
    s->display();

    // Releasing dynamically allocated memory
    delete s;

    return 0;
}