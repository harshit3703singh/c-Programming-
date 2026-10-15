#include<iostream>
#include<string>
using namespace std;
template <class t>
class box{
    private:
    t box1;
    public:
    box(t b)
    {
        box1=b;
    }
    void display()
    {
        cout<<"box number"<<box1<<endl;
    }

};
int main()
{
    box<string> b1("boxx1");
    box<int> b2(20000);
    box<double>b3(45.0);
    b1.display();
    b2.display();
    b3.display();
    return 0;


}
