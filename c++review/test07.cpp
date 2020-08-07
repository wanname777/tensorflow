#include <iostream>
#define PI 3.14
using namespace std;
class Shape
{
private:
public:
    Shape();
    ~Shape();
    double getArea();
};

Shape::Shape()
{
}

Shape::~Shape()
{
}

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double _length, double _width);
    ~Rectangle();
    double getArea();
};

Rectangle::Rectangle(double _length, double _width)
    : length(_length), width(_width)
{
}

Rectangle::~Rectangle()
{
}
double Rectangle::getArea()
{
    return length * width;
}
class Square : public Rectangle
{
private:
    double len;

public:
    Square(double _len);
    ~Square();
};

Square::Square(double _len) : Rectangle(_len, _len), len(_len)
{
}

Square::~Square()
{
}
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double _radius);
    ~Circle();
    double getArea();
};

Circle::Circle(double _radius) : radius(_radius)
{
}

Circle::~Circle()
{
}
double Circle::getArea()
{
    return PI * radius * radius;
}
int main()
{
    Rectangle a(1, 2);
    cout << a.getArea() << endl;
    Square b(5);
    cout << b.getArea() << endl;
    Circle c(3);
    cout << c.getArea() << endl;
    return 0;
}