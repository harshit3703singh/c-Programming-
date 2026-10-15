#include <iostream>
using namespace std;

class Engine
{
public:
    void start()
    {
        cout << "Engine is working." << endl;
    }
};

class Car
{
    Engine e;

public:
    void startCar()
    {
        cout << "Car is starting." << endl;
        e.start();
    }
};

int main()
{
    Car c;

    c.startCar();

    return 0;
}