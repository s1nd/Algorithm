#include<iostream>
using namespace std;

#define Status int
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define ALLOCATIONFALSE -3
#ifndef Queue_H
#define Queue_H
class Queue
{
public:
    int *head,*rear;//rear-1是指向最后一个元素
    int *base, *tail;
    int capacity = 3,length = 0;
    Queue(){base=head=rear=new int[10]; tail=base+capacity-1;};
    ~Queue(){delete[] head,rear;};
    void show()const;
    Status EnQueue(int data);
    //Status EnQueue(int len,*p);
    Status DeQueue();
    bool isEmpty()const;
    bool isFull()const;
};

#endif
