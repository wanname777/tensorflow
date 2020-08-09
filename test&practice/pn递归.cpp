#include <iostream>
using namespace std;
double pn(double x, double n) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else if (n >= 2)
        return ((2 * n - 1) * x - pn(x, n - 1) - (n - 1) * pn(x, n - 2)) / n;
}
int main() {
    double x = 9.0;
    double n = 3.0;
    cout << pn(x, n) << endl;
    return 0;
}