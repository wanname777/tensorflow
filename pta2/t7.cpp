#include <cmath>
#include <iostream>
// #include<vector>
#include <queue>
using namespace std;
// vector<int> v;
queue<int> q;
int num;
int isPrime(int n) {
    if (n == 1) {
        return 0;
    }
    int a = sqrt(n) + 1;
    for (int i = 2; i < a; i++) {
        if (!(n % i)) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    cin >> n;
    // v.push_back(2);
    q.push(2);
    if(n==2) return 0;
    for (int i = 3; i < n; i++) {
        // int t=*v.begin();
        if (isPrime(i)) {
            if ((i - q.back()) == 2) {
                num++;
            }
            q.push(i);
            // cout << i << endl;
        }
    }
    cout << num;
}