#include <iostream>
#include <cstring>
using namespace std;
class Person
{
private:
    char name[100];
    char sex[100];
    char province[100];
    char date[100];
    char id[100];

public:
    Person();
    Person(char *name, char *id);
    void Show();
    void modify_id(char *id);
};

Person::Person()
{
    cout << "构建成功" << endl;
}
Person::Person(char *name, char *id) : sex("man"), province("shandong"), date("20000101")
{
    strcpy(this->name, name);
    strcpy(this->id, id);
    cout << "构建成功" << endl;
}
void Person::Show()
{
    cout << name << endl;
    cout << sex << endl;
    cout << province << endl;
    cout << date << endl;
    cout << id << endl;
}
void Person::modify_id(char *id)
{
    strcpy(this->id, id);
}
int main()
{
    auto num = 1;
    cout << num << endl;
    Person a;
    Person b("xiaoming", "123456");
    b.Show();
    b.modify_id("111111");
    b.Show();
    return 0;
}
