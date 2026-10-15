// #include<iostream>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int roll;
//     string course;
//     void getinput()
//     {
//         cout<<"enter name of student "<<endl;
//         cin>>name>>endl;
//         cout<<"enter roll of student "<<endl;
//         cin>>roll<<endl;
//         cout<<"enter course of student "<<endl;
//         cin>>course<<endl;


//     }
//     // void display()
//     // {
//     //     cout<<"enter the name of student"
//     // }

// };

// int main()
// {
//     // student s1;
//     // s1.name="rahul";
//     // s1.roll=45;
//     // s1.course="BCA";
//     // cout<<"student name "<<s1.name<<endl;
//     // cout<<"student roll "<<s1.roll<<endl;
//     // cout<<"student course "<<s1.course<<endl;
//     student *s1=new student;
//     s1->getinput();


//     return 0;



// }






#include <iostream>
#include <string>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    string course;

    void getinput()
    {
        cout << "Enter name of student: ";
        cin >> name;

        cout << "Enter roll of student: ";
        cin >> roll;

        cout << "Enter course of student: ";
        cin >> course;
    }

    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    // Dynamically allocating memory for student object
    student *s1 = new student;

    // Functions call karna using arrow (->) operator
    s1->getinput();
    s1->display();

    // Dynamically allocated memory free karna achhi practice hoti hai
    delete s1;

    return 0;
}