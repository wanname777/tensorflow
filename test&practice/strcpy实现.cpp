#include <iostream>
using namespace std;
void strcpy(char cht[], const char chs[]) {
    if (!*chs)
        return;
    *cht++ = *chs++;
    strcpy(cht, chs);
}
int main() {
    char t[10];
    char s[10] = "aa";
    strcpy(t, s);
    cout << s << endl;
    cout << t << endl;
    return 0;
}