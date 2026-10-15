#include<iostream>
#include<string>
using namespace std;
class teacher{
    private:
    double salary;
    public:
    string name;
    string dept;
    void changedept(string d)
    {
dept=d;
    }
    void setsalary(double s)
    {
      salary=s;
    }
    void getsalary()
    {
        cout<<"salary is"<<salary<<endl;
    }
};
int main()
{
    teacher t1;
    t1.name="rahul";
    cout<<"name is "<<t1.name<<endl;
    t1.changedept("science");
    t1.setsalary(20000);
    t1.getsalary();
    return 0;

}
