#include<iostream>
using namespace std;
class area
{
    public:
    int length,breadth;
    int tarea;
    



void enter()
{

    cout<<"enter the length";
    cin>> length;
    cout<<"enter the breadth";
    cin>> breadth;



}
void areaf()
{
    
    tarea=length*breadth;
}
void display()
{
    cout<<"-----area is-----"<<endl;
    cout<<"length is"<<length<<endl;
    cout<<"breadth is"<<breadth<<endl;
    cout<<"area is"<<tarea<<endl;


}
    
};
int main()
{
    area *a1=new area;
    a1->enter();
    a1->areaf();
    a1->display();
    


}
