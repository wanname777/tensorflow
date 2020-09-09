#include <cstdio>
#include <iostream>
#define MAX_N 1000
using namespace std;
int power_a[MAX_N];
int result;
void my_power(int x0, int n) {
    power_a[0] = 1;
    for (int i = 1; i < n; i++) {
        power_a[i] = power_a[i - 1] * x0;
    }
}
void solve() {
    int n;
    scanf("%d", &n);
    int x0;
    scanf("%d", &x0);
    my_power(x0, n);
    int a;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        result += a * power_a[i];
    }
    printf("%d", result);
}
int main() {
    solve();
    return 0;
}
