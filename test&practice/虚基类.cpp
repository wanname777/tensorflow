#include <iostream>
#include <string>
using namespace std;
class vehicle {
private:
    int MaxSpeed;
    float Weight;
    float price;

public:
    vehicle();
    vehicle(int m, float w, float p);
    vehicle(vehicle &v);
    ~vehicle();
    void print();
    void Run();
    void Stop();
};

vehicle::vehicle() { cout << "The vehicle has been constructed" << endl; }
vehicle::vehicle(int m, float w, float p) : MaxSpeed(m), Weight(w), price(p) {
    cout << "The vehicle has been constructed" << endl;
}
vehicle::vehicle(vehicle &v)
    : MaxSpeed(v.MaxSpeed), Weight(v.Weight), price(v.price) {
    cout << "The vehicle has been copied" << endl;
}
vehicle::~vehicle() { cout << "The vehicle has been deconstructed" << endl; }
void vehicle::print() {
    cout << "maxspeed:" << MaxSpeed << endl
         << "weight:" << Weight << endl
         << "price:" << price << endl;
}
void vehicle::Run() { cout << "The vehicle is running!" << endl; }
void vehicle::Stop() { cout << "The vehicle has stopped!" << endl; }

class bicycle : virtual public vehicle {
private:
    string material;

public:
    bicycle();
    bicycle(string s, int m, float w, float p);
    bicycle(bicycle &b, vehicle &v);
    ~bicycle();
    void print();
    void Run();
    void Stop();
};

bicycle::bicycle() {
    cout << "The bicycle has been constructed by default constructor" << endl;
}
bicycle::bicycle(string s, int m, float w, float p)
    : material(s), vehicle(m, w, p) {
    cout << "The bicycle has been constructed" << endl;
}
bicycle::bicycle(bicycle &b, vehicle &v) : material(b.material), vehicle(v) {
    cout << "The bicycle has been copied" << endl;
}
bicycle::~bicycle() { cout << "The bicycle has been deconstructed" << endl; }
void bicycle::print() {
    vehicle::print();
    cout << "material:" << material << endl;
}
void bicycle::Run() { cout << "The bicycle is running!" << endl; }
void bicycle::Stop() { cout << "The bicycle has stopped!" << endl; }
class motorcar : virtual public vehicle {
private:
    float Length;
    float Height;
    float Gas;

public:
    motorcar();
    motorcar(float l, float h, float g, int m, float w, float p);
    motorcar(motorcar &m, vehicle &v);
    ~motorcar();
    void print();
    void Run();
    void Stop();
};

motorcar::motorcar() { cout << "The motorcar has been constructed" << endl; }
motorcar::motorcar(float l, float h, float g, int m, float w, float p)
    : Length(l), Height(h), Gas(g), vehicle(m, w, p) {
    cout << "The motorcar has been constructed" << endl;
}
motorcar::motorcar(motorcar &m, vehicle &v)
    : Length(m.Length), Height(m.Height), Gas(m.Gas), vehicle(v) {
    cout << "The motorcar has been copied" << endl;
}

motorcar::~motorcar() { cout << "The motorcar has been deconstructed" << endl; }
void motorcar::print() {
    vehicle::print();
    cout << "length:" << Length << endl
         << "height:" << Height << endl
         << "gas:" << Gas << endl;
}
void motorcar::Run() { cout << "The motorcar is running!" << endl; }
void motorcar::Stop() { cout << "The motorcar has stopped!" << endl; }

class motorcycle : public motorcar, public bicycle {
private:
    int power;

public:
    motorcycle();
    motorcycle(int pow, float l, float h, float g, int m, float w, float p,
               string s);
    motorcycle(motorcycle &m, motorcar &mcar, vehicle &v, bicycle &b);
    ~motorcycle();
    void print();
    void Run();
    void Stop();
};

motorcycle::motorcycle() {
    cout << "The motorcycle has been constructed" << endl;
}
motorcycle::motorcycle(int pow, float l, float h, float g, int m, float w,
                       float p, string s)
    : power(pow), motorcar(l, h, g, m, w, p), bicycle(s, m, w, p),
      vehicle(m, w, p) {
    cout << "The motorcycle has been constructed" << endl;
}
motorcycle::motorcycle(motorcycle &m, motorcar &mcar, vehicle &v, bicycle &b)
    : power(m.power), motorcar(mcar, v), bicycle(b, v), vehicle(v) {
    cout << "The motorcycle has been copied" << endl;
}
motorcycle::~motorcycle() {
    cout << "The motorcycle has been deconstructed" << endl;
}
void motorcycle::print() {
    bicycle::print();
    motorcar::print();
    cout << "power:" << power << endl;
}
void motorcycle::Run() { cout << "The motorcycle is running!" << endl; }
void motorcycle::Stop() { cout << "The motorcycle has stopped!" << endl; }
void fun(vehicle *ptr) {
    ptr->print();
    ptr->Run();
    ptr->Stop();
}
int main() {
    vehicle *p;
    string s = "aaa";
    vehicle a(99, 99, 99);
    motorcar b(200, 200, 200, 100, 100, 100);
    motorcycle c(300, 200, 200, 200, 100, 100, 100, s);
    bicycle d(s, 80, 80, 80);
    fun(&a);
    cout << endl;
    fun(&b);
    cout << endl;
    fun(&c);
    cout << endl;
    fun(&d);
    cout << endl;
    return 0;
}