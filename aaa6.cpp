#include <iostream>
using namespace std;

class Number
{
private:
    int a, b;

public:
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    friend void sum(int a, int b);
};

void sum(int a, int b)
{
    cout << "Sum = " << a + b << endl;
}

int main()
{
    Number n;

    n.getData();
    sum(n.a, n.b);

    return 0;
}