#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct LinkList {
    int data;
    struct LinkList *next;
} * LNode;
void my_merge(LinkList *A, LinkList *B, LinkList *C);
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
    cin >> n;
    p = B;
    B->next = NULL;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        LNode temp_L = (LNode)malloc(sizeof(LinkList));
        temp_L->data = m;
        temp_L->next = p->next;
        p->next = temp_L;
        p = p->next;
    }
    my_merge(A, B, C);
    p = C->next;
    while (p) {
        cout << p->data << endl;
        p = p->next;
    }
}
void my_merge(LinkList *A, LinkList *B, LinkList *C) {
    LNode p, q, temp;
    p = A->next;
    q = B->next;
    temp = C;
    while (p && q) {
        if (p->data <= q->data) {
            temp->next = p;
            p = p->next;
            temp = temp->next;
        } else {
            temp->next = q;
            q = q->next;
            temp = temp->next;
        }
    }
    temp->next = p ? p : q;
}