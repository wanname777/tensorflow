#include <iostream>
using namespace std;
class Cat
{
private:
    static int num;
    double length;
    double weight;

public:
    Cat(double _length, double _weight);
    ~Cat();
    static int getNum();
    double getLength();
    double getWeight();
};
int Cat::num = 0;
Cat::Cat(double _length, double _weight) : length(_length), weight(_weight)
{
    num++;
}

Cat::~Cat() {}
int Cat::getNum()
{
    // cout<<length<<endl; //错误，静态函数只能引用静态成员
    return num;
}
double Cat::getLength() { return length; }
double Cat::getWeight() { return weight; }
int main()
{
    Cat a(1, 2);
    cout << a.getNum() << endl
         << a.getLength() << endl;
    Cat b(3, 4);
    cout << b.getNum() << endl
         << b.getWeight() << endl;
    return 0;
}
