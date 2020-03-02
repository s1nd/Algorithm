#include "LinkList.h"
template <class T>
Status LinkList<T>::ListInsert(int i, T *t){

    //初始化插入的节点
    LNode<T> *Node = new LNode<T>(t);
    LNode<T> *p = head;
//    cout<<"head: "<< p <<endl;
    //添加第一个元素
    if(!p){
        head = Node;
        return OK;
    }
    //p+i是连续的物理地址
//    if(!(p+i)->next){
//        return ERROR;
//    }

   //找到第i-1个节点
    for(int j = 0; j<i-1; j++){
        p = p->next;
    }
//    cout<<"p->next: "<< p->next <<endl;
    if(p->next){
         cout << "at if:"<<*p->next->data<<endl;
    }

    //改变指向
    Node->next = p;
    head = Node;
    return OK;
}
template <class T>
Status LinkList<T>::ListDelete(int i){
    LNode<T> *p = head;
    for(int j = 0;j < i-1;j++){
        p = p->next;
    }
    p->next = p->next->next;
    return OK;
}
template <class T>
void LinkList<T>::creatList(LinkList &List){

}
template<class T>
void LinkList<T>::ListAll(){
    LNode<T> *p = head;
    while(p->next){
        cout << *p->data << endl;
        p = p->next;
     }
        cout << *p->data << endl;
}
