#include<iostream>
#include "LinkList.h"
using namespace std;
int main0(){
    int a=1,b=2,c=3;
    int *p1, *p2, *p3;
    void show(LNode<int> *p);
    p1 = &a;p2 =  &b; p3 = &c;
    LNode<int> n1(p1), n2(p2), n3(p3);
    LNode<int> *head = &n1;//加入第一个元素
    head = &n2;
    n2.next = &n1;
    head = &n3;
    n3.next =&n2;
    show(head);
//    if(NULL){
//        cout<< "null"<<endl;
//    }
    return 0;
}
void show(LNode<int> *head){
    LNode<int> *p = head;
    while(p->next){
        cout << *p->data<<endl;
        p = p->next;
    }
     cout << *p->data<<endl;
}
