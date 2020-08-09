#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
map<int, int> m;
bool cmp(int a, int b) { return a > b; }
void fn(int n) {
    if (n == 1) {
        return;
    }
    if (!(n % 2)) {
        int t = n / 2;
        if (m[t])
            m[t]++;
        fn(n / 2);
    } else {
        int t = (3 * n + 1) / 2;
        if (m[t])
            m[t]++;
        fn(t);
    }
}
int main(int argc, char const *argv[]) {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        m[t]++;
    }
    for (auto &&i : m) {
        fn(i.first);
    }
    int no_use[100];
    int no_num = 0;
    for (auto &&i : m) {
        if (i.second == 1) {
            no_use[no_num++] = i.first;
        }
    }
    sort(no_use, no_use + no_num, cmp);
    for (int i = 0; i < no_num - 1; i++) {
        cout << no_use[i] << " ";
    }
    cout << no_use[no_num - 1];

    return 0;
}
