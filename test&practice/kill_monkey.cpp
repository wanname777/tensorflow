#include <iostream>
using namespace std;
int N, M;
int fn(int n, int m) {
    if (n == 1)
        return 0;
    return (fn(n - 1, m) + m) % n;
}
int main() {
    cin >> N >> M;
    cout << fn(N, M) + 1 << endl;
    return 0;
}