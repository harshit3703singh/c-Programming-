#include<iostream>
#include<string>
using namespace std;
template <class t, class u>
class position{
private:
t one;
u second;
public:
position(t n, u v)
{
    one=n;
    second=v;
}
void display()
{
    cout<<"first num is "<<one<<endl;
    cout<<"second num is "<<second<<endl;

}
};
int main()
{
    position<int,string> p1(10,"two");
    position<string,int> p2("second",10);
    p1.display();
    p2.display();
    return 0;

}