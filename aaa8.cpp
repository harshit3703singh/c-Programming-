#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    string subject;

    void getData()
    {
        cout << "Enter Teacher Name: ";
        cin >> name;

        cout << "Enter Subject: ";
        cin >> subject;
    }
};

class Department
{
public:
    void display(Teacher t)
    {
        cout << "\nTeacher Details:" << endl;
        cout << "Name: " << t.name << endl;
        cout << "Subject: " << t.subject << endl;
    }
};

int main()
{
    Teacher t;
    Department d;

    t.getData();
    d.display(t);

    return 0;
}