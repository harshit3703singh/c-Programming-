#include<iostream>
#include<string>
using namespace std;
class animal{
public:
virtual void sound()
{
    cout<<"sound of animal"<<endl;

}
};
class dog:public animal{

    public:
    void sound(){
        cout<<"dog barks"<<endl;
    }
};
int main()
{
    dog d1;
    d1.sound();
}