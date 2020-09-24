#include <cstdio>
#include <iostream>
using namespace std;
void my_sort();
int main() {
    my_sort();
    return 0;
}
void my_sort() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    if (X < Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }
    if (Y < Z) {
        int temp = Y;
        Y = Z;
        Z = temp;
    }
    if (X < Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }
    printf("%d %d %d", X, Y, Z);
}