#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct LinkList {
    int data;
    struct LinkList *next;
} * LNode;
void my_reverse(LinkList *L);
int main() {
    int n;
    cin >> n;
    LinkList *L = (LinkList *)malloc(sizeof(LinkList));
    LNode p = (LNode)malloc(sizeof(LinkList));
    LNode pre = (LNode)malloc(sizeof(LinkList));
    // LNode pre = (LNode)malloc(sizeof(LinkList));
    p = L;
    L->next = NULL;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        LNode temp_L = (LNode)malloc(sizeof(LinkList));
        temp_L->data = m;
        temp_L->next = p->next;
        p->next = temp_L;
        p = p->next;
    }
    my_reverse(L);
    p = L->next;
    while (p) {
        cout << p->data << endl;
        p = p->next;
    }
}
void my_reverse(LinkList *L) {
    LNode p, pre;
    p = L->next;
    while (p) {
        // cout << p->data << endl;
        pre = p;
        p = p->next;
    }
    while (L->next != pre) {
        LNode q = L->next;
        L->next = q->next;
        q->next = pre->next;
        pre->next = q;
    }
}