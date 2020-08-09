#include <iostream>
using namespace std;
int ans;
void fn(int n) {
    if (n == 1) {
        return;
    }
    ans++;
    if (!(n % 2)) {
        fn(n / 2);
    } else {
        fn((3 * n + 1) / 2);
    }
}
int main() {
    int n;
    cin >> n;
    fn(n);
    cout << ans;
    return 0;
}