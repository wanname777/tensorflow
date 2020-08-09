#include <iostream>
#include <string>
using namespace std;
int main() {
    int num = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        num += (s[i] - '0');
    }
    // cout<<num;
    s = to_string(num);
    for (int i = 0; i < s.length() - 1; i++) {
        switch (s[i]) {
        case '1':
            cout << "yi ";
            break;
        case '2':
            cout << "er ";
            break;
        case '3':
            cout << "san ";
            break;
        case '4':
            cout << "si ";
            break;
        case '5':
            cout << "wu ";
            break;
        case '6':
            cout << "liu ";
            break;
        case '7':
            cout << "qi ";
            break;
        case '8':
            cout << "ba ";
            break;
        case '9':
            cout << "jiu ";
            break;
        case '0':
            cout << "ling ";
            break;
        default:
            break;
        }
    }
    switch (s[s.length() - 1]) {
    case '1':
        cout << "yi";
        break;
    case '2':
        cout << "er";
        break;
    case '3':
        cout << "san";
        break;
    case '4':
        cout << "si";
        break;
    case '5':
        cout << "wu";
        break;
    case '6':
        cout << "liu";
        break;
    case '7':
        cout << "qi";
        break;
    case '8':
        cout << "ba";
        break;
    case '9':
        cout << "jiu";
        break;
    case '0':
        cout << "ling";
        break;
    default:
        break;
    }
}