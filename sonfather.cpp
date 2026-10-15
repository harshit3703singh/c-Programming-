#include<iostream>
#include<string>
using namespace std;
class sonfather
{
    private:
    double salary;
    public:
    string surname;
    double money;
    void setfatherdata(string q,double e,double r){
        surname=q;
        money=e;
        salary=r;


    }
    void getfatherdata()
    {
        cout<<"surname\t"<<surname<<endl;
        cout<<"money\t"<<money<<endl;
        cout<<"salary\t"<<salary<<endl;

    }
    double getsalary()
    {
        return salary;
    }
    
  
};
class son:public sonfather{
  private:
  double sonsalary;
  public:
  string sonname;
  double sonmoney;
  void setsondata(string s,double m,double d)
  {
        sonname=s;
        sonmoney=m;
        sonsalary=d;
  }
    void getsondata()
    {
        cout<<"son name\t"<<sonname<<endl;
        cout<<"son money\t"<<sonmoney<<endl;
        cout<<"son salary\t"<<sonsalary<<endl;

    }
    double getsalary()
    {
        return sonsalary;
    }

};
int main()
{
    son s1;
    s1.setfatherdata("sharma",23,56);
    s1.getfatherdata();
    s1.setsondata("harish",23,56);
    s1.getsondata();
    return 0;
}

