#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
//Statu�Ǻ������ͣ���ֵ�Ǻ������״̬����
#define Status int
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define ALLOCATIONFALSE -3
#ifndef LinkList_H
#define LinkList_H
//�ڵ���
template<class T>
class LNode
{
public:
    LNode &next;
    LNode<T>(T &d , LNode &p ){
        data = d;
        next = p;
    }
    ~LNode(){delete data;delete next;};
    T &data;//ָ�����ݵ�ָ��
};
//������
template<class T>
class LinkList
{
private:
    LNode<T> head;
    //LNode<T> &ptr = head;
public:
//    LinkList(){head.next = NULL;};
    LinkList(){};
    ~LinkList(){};
    Status ListInsert(int i, T &t);
    Status ListDelete(int i);
    void creatList(LinkList &L);
    void ListAll()const;

};
#endif
