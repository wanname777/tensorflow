#include <iostream>
#include <cstring>
using namespace std;
class Date
{
private:
    int year;
    int month;
    int day;

public:
    Date(int _year, int _month, int _day);
    Date(Date &d);
    ~Date();
    int getYear();
    int getMonth();
    int getDay();
};

Date::Date(int _year, int _month, int _day) : year(_year), month(_month), day(_day)
{
}
Date::Date(Date &d) : year(d.getYear()), month(d.getMonth()), day(d.getDay())
{
}
Date::~Date()
{
}

int Date::getYear()
{
    return year;
}
int Date::getMonth()
{
    return month;
}
int Date::getDay()
{
    return day;
}
class Person
{
private:
    char number[100];
    int gender;
    Date birth;
    char id[100];

public:
    Person(char _number[], int _gender, Date _birth, char _id[]);
    ~Person();
};

Person::Person(char _number[], int _gender, Date _birth, char _id[]) : gender(_gender), birth(_birth)
{
    strcpy(number, _number);
    strcpy(id, id);
}

Person::~Person()
{
}

int main()
{
    // int a;
    Date d(1234, 5, 6);
    Person p("01", 1, d, "5555");
    // cin >> a;
}
