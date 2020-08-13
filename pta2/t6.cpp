#include <iostream>
// #include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    if (s.length() == 3) {
        for (int i = 0; i < int(s[0]) - '0'; i++) {
            cout << "B";
        }
        for (int i = 0; i < int(s[1]) - '0'; i++) {
            cout << "S";
        }
        for (int i = 0; i < int(s[2]) - '0'; i++) {
            cout << i + 1;
        }

    } else if (s.length() == 2) {
        for (int i = 0; i < int(s[0]) - '0'; i++) {
            cout << "S";
        }
        for (int i = 0; i < int(s[1]) - '0'; i++) {
            cout << i + 1;
        }
    } else {
        for (int i = 0; i < int(s[0]) - '0'; i++) {
            cout << i + 1;
        }
    }
}