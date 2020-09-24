#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct LinkList {
    int data;
    struct LinkList *next;
} * LNode;
void my_delete(LinkList *L, int mink, int maxk);
int main() {
    int n;
    cin >> n;
    int mink, maxk;
    cin >> mink >> maxk;
    LinkList *L = (LinkList *)malloc(sizeof(LinkList));
    LNode p = (LNode)malloc(sizeof(LinkList));
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
    my_delete(L, mink, maxk);
    p = L->next;
    while (p) {
        cout << p->data << endl;
        p = p->next;
    }
}
void my_delete(LinkList *L, int mink, int maxk) {
    LNode p = (LNode)malloc(sizeof(LinkList));
    LNode pre = (LNode)malloc(sizeof(LinkList));
    p->next = NULL;
    pre = L;
    p = L->next;
    while (p && p->data <= mink) {
        // cout<<p->data<<endl;
        pre = p;
        p = p->next;
    }
    while (p && p->data < maxk) {
        pre->next = p->next;
        p = p->next;
    }
}