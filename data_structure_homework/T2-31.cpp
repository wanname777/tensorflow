#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct LinkList {
    int data;
    struct LinkList *next;
} * LNode;
void my_delete(LinkList *L, LNode s);
int main() {
    int n;
    cin >> n;
    LinkList *A = (LinkList *)malloc(sizeof(LinkList));
    LinkList *B = (LinkList *)malloc(sizeof(LinkList));
    LinkList *C = (LinkList *)malloc(sizeof(LinkList));
    LNode p = (LNode)malloc(sizeof(LinkList));
    LNode q = (LNode)malloc(sizeof(LinkList));
    LNode temp = (LNode)malloc(sizeof(LinkList));
    LNode pre = (LNode)malloc(sizeof(LinkList));

    p = A;
    A->next = NULL;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        LNode temp_L = (LNode)malloc(sizeof(LinkList));
        temp_L->data = m;
        temp_L->next = p->next;
        p->next = temp_L;
        p = p->next;
    }
    p->next = A->next;
    A = A->next;
    LNode s = A;
    my_delete(A, s);

    p = A;
    cout << p->data << endl;
    p = p->next;
    while (p != A) {
        cout << p->data << endl;
        p = p->next;
    }
}
void my_delete(LinkList *L, LNode s) {
    LNode p, pre;
    p = s;
    while (p->next != s) {
        pre = p;
        p = p->next;
    }
    pre->next = p->next;
}