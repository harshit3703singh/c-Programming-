#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getPerson()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }
};

class Student : public Person
{
public:
    int rollNo;

    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void display()
    {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main()
{
    Student s;

    s.getPerson();
    s.getStudent();
    s.display();

    return 0;
}