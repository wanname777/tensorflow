#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct {
    int *elem;
    int size;
} sqList;
void my_reverse(sqList &L);
int main() {
    int n;
    cin >> n;
    sqList L;
    L.elem = (int *)malloc(n * sizeof(int));
    L.size = n;
    int *p = (int *)malloc(sizeof(int));
    p = L.elem;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        *p++ = m;
    }
    *p = -1;
    my_reverse(L);
    p = L.elem;
    while (*p != -1) {
        cout << *p++ << endl;
        // p++;
    }
}
void my_reverse(sqList &L) {
    // int i,j;
    // i=L.elem[0];
    // j=L.elem[L.size-1];
    for (int i = 0, j = L.size - 1; i < j; i++, j--) {
        int temp = L.elem[i];
        L.elem[i] = L.elem[j];
        L.elem[j] = temp;
    }
}