#include <iostream>
#define PI 3.14
using namespace std;
class Shape
{
private:
public:
    Shape();
    ~Shape();
    virtual double getArea(); //通过虚函数实现后期的多态性
};

Shape::Shape()
{
}

Shape::~Shape()
{
}
double Shape::getArea()
{
    return 0;
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
    Shape *p;
    p = &a;
    cout << p->getArea() << endl;
    p = &b;
    cout << p->getArea() << endl;
    p = &c;
    cout << p->getArea() << endl;
    cout << "nihao" << endl;
    return 0;
}