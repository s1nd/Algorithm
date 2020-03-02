#include<iostream>
#include "LinkList.h"
using namespace std;
template <class T>
Status LinkList<T>::ListInsert(int i, T &t){
    LNode<int> &Node(t);
//    LNode<int> &Node = new LNode<int>(t);
    if(!head.next){
        head.next = Node;
    }
    LNode<int> &p = head;
    for(int j = 0;j<i-1;j++){
        p = p.next;
    }
    Node.next = p.next;
    p.next = Node;
    return OK;
}
template <class T>
Status LinkList<T>::ListDelete(int i){

    return OK;
}
template <class T>
void LinkList<T>::creatList(LinkList &List){

}
template<class T>
void LinkList<T>::ListAll()const{
    LNode<int> &p = head;
    while(p.next){
        cout << p.data<<endl;
        p = p.next;
    }
     cout << p.data<<endl;
}

