#include <cstdio>
#include <iostream>
#define arrsize 1000
#define MAXINT 100000
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    int a[arrsize];
    a[0] = 1;
    if (n > arrsize) {
        return 0;
    }
    for (int i = 1; i < n; i++) {

        if (a[i - 1] > MAXINT / (2 * i)) {
            return 0;
        } else {
            a[i] = a[i - 1] * 2 * i;
            // cout<<a[i-1]<<endl;
        }
    }
    return 1;
}
int main() {
    printf("%d", solve());
    return 0;
}