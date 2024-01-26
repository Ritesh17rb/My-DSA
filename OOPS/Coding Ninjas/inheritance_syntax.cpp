#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Vehicle
{
private:
    int maxSpeed;

protected:
    int numTyres;

public:
    string color;

    // Vehicle()
    // {
    //     cout << "Vehicle Default Constructor" << endl;
    // }
    Vehicle(int z)
    {
        cout << "1->Vehicle Parametrised Construtor" << endl;
        maxSpeed = z;
    }
    ~Vehicle()
    {
        cout << "2->Vehicle's Destructor" << endl;
    }
};

class Car : public Vehicle
{
public:
    int numGears;

    // void print()
    // {
    //     cout << "NumTyres-> " << numTyres << endl;
    //     cout << "Color " << color << endl;
    //     cout << "Num Gears " << numGears << endl;
    //     // cout<<'Max Speed '<<maxSpeed<<endl;
    // }
    Car(int x, int y) : Vehicle(x)
    {
        cout << "3->Car's Constructor" << endl;
        numGears = y;
    }
    ~Car()
    {
        cout << "4->Car's Destructor" << endl;
    }
};

class HondaCity : public Car
{
    HondaCity(int x, i                                                   v
        cout << "Honda City Constructor" << endl;
    }
    ~HondaCity()
    {
        cout << "Honda City Destructor" << endl;
    }
};

class Truck : public Vehicle
{
};

int main()
{
    Vehicle v(4);

    // v.color = "Blue";

    // v.maxSpeed = 100;

    // v.numTyres = 4;

    Car c(4, 5);
    // c.color = "Black";

    // c.numGears = 4;

    // c.numTyres = 5;

    return 0;
}