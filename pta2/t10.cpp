#include <iostream>
using namespace std;
int main() {
    int a, b;
    int flag=0;
    while (cin >> a >> b) {

        if (b != 0) {
            if (flag) {
                cout << " ";
            }
            cout << a * b << " " << b - 1;
            flag = 1;
        }
    }
    if (flag == 0) {
        cout << "0 0";
    }
}