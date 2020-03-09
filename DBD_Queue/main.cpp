#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    Queue q;
    q.EnQueue(1);
    q.EnQueue(2);
    q.EnQueue(3);
    q.DeQueue();
    q.EnQueue(4);
    q.show();

    cout<<endl<<q.isEmpty();
    cout<<endl<<q.isFull();

    return 0;
}
