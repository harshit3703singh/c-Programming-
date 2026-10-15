#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    string name;
    string subject;

public:
    Teacher(string n, string s)
    {
        name = n;
        subject = s;
    }

    void display()
    {
        cout << "Teacher Name: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

class Department
{
private:
    string deptName;
    Teacher *teacher;

public:
    Department(string d, Teacher *t)
    {
        deptName = d;
        teacher = t;
    }

    void display()
    {
        cout << "Department: " << deptName << endl;
        teacher->display();
    }
};

int main()
{

    Teacher t1("Rahul Sharma", "Computer Science");

    Department d1("Computer Science", &t1);

    d1.display();

    return 0;
}