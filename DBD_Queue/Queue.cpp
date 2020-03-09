#include <iostream>
#include "Queue.h"
using namespace std;

/**<
   Status EnQueue();
    Status DeQueue();
    bool isEmpty()const;
    bool isFull()const;
 */
void Queue::show()const{
    //cout << "good!" << endl;
    int len = length+1;//const 函数，不能修改length
    int *h=head, *r=rear;//delete
    while(--len){
        cout<< *h<<"   ";
        if(h==tail){
            h = base;
        }else{
            ++h;
        }
    }
}

Status Queue::EnQueue(int data){
    if(isFull()){
        return OVERFLOW;
    }
    *rear = data;
    if(rear == tail){
        rear = base;
    }else{
      ++rear;
    }

    ++length;
    return OK;
}

Status Queue::DeQueue(){
    if(isEmpty()){
        return ERROR;
    }
    if(head == tail){
        head = base;
    }else{
        ++head;
    }

    --length;
    return OK;
}

bool Queue::isEmpty()const{
    if(length){
        return false;
    }
    return true;
}

bool Queue::isFull()const{
    if(length == capacity){
        return true;
    }
    return false;
}
