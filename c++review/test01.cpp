#include <iostream>
using namespace std;
int main()
{
    cout << "你好" << endl;
    int Program;
    // int -page;  非法
    int _lock;
    int test2;
    // int 3inl;
    // int @mail;
    int A_B_C_D;

    enum Color
    {
        white,
        black = 100,
        red,
        blue,
        green = 300
    };
    enum Color s = white;
    cout << s << endl;
    s = black;
    cout << s << endl;
    s = red;
    cout << s << endl;
    s = blue;
    cout << s << endl;

    int num = 59;
    int guess_num;
    cin >> guess_num;
    while (num != guess_num)
    {
        cout << "wrong" << endl;
        cin >> guess_num;
    }
    cout << "right" << endl;
    return 0;
}