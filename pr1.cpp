#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;

public:
    // Constructor
    Student()
    {
        rollNo = 101;
        name = "Harshit";

        cout << "Constructor called!" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called!" << endl;
        cout << "Object destroyed." << endl;
    }
};

int main()
{
    Student s;

    return 0;
}