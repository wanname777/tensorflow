#include <iostream>
using namespace std;
class Car; //必须加前项引用，不然Boat的getBothWeight无法正常使用
class Boat
{
private:
    double weight;

public:
    Boat(double _weight);
    ~Boat();
    friend double getBothWeight(Boat &b, Car &c);
};

Boat::Boat(double _weight) : weight(_weight)
{
}

Boat::~Boat()
{
}
class Car
{
private:
    double weight;

public:
    Car(double _weight);
    ~Car();
    friend double getBothWeight(Boat &b, Car &c);
};

Car::Car(double _weight) : weight(_weight)
{
}

Car::~Car()
{
}
double getBothWeight(Boat &b, Car &c)
{
    return b.weight + c.weight;
}
int main()
{
    Boat a(120);
    Car b(50);
    cout << getBothWeight(a, b) << endl;
}