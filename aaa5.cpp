#include <iostream>
using namespace std;

class Vehicle
{
public:
    void vehicle()
    {
        cout << "This is a Vehicle." << endl;
    }
};

class Car : public Vehicle
{
public:
    void car()
    {
        cout << "This is a Car." << endl;
    }
};

class SportsCar : public Car
{
public:
    void sportsCar()
    {
        cout << "This is a Sports Car." << endl;
    }
};

int main()
{
    SportsCar s;

    s.vehicle();
    s.car();
    s.sportsCar();

    return 0;
}