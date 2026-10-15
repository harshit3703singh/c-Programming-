#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;

    Teacher(string n)
    {
        name = n;
    }

    void display()
    {
        cout << "Teacher: " << name << endl;
    }
};

class Department
{
private:
    Teacher* teacher;

public:
    Department(Teacher* t)
    {
        teacher = t;
    }

    void showTeacher()
    {
        teacher->display();
    }
};

int main()
{
    Teacher t("Dr. Sharma");

    Department d(&t);

    d.showTeacher();

    return 0;
}