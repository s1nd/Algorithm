#include "LinkList.h"
template <class T>
Status LinkList<T>::ListInsert(int i, T *t){

    //��ʼ������Ľڵ�
    LNode<T> *Node = new LNode<T>(t);
    LNode<T> *p = head;
//    cout<<"head: "<< p <<endl;
    //��ӵ�һ��Ԫ��
    if(!p){
        head = Node;
        return OK;
    }
    //p+i�������������ַ
//    if(!(p+i)->next){
//        return ERROR;
//    }

   //�ҵ���i-1���ڵ�
    for(int j = 0; j<i-1; j++){
        p = p->next;
    }
//    cout<<"p->next: "<< p->next <<endl;
    if(p->next){
         cout << "at if:"<<*p->next->data<<endl;
    }

    //�ı�ָ��
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
