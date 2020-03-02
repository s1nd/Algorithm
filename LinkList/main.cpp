#include <iostream>
#include "LinkList.h"
#include "Linklist.cpp"
using namespace std;

int main()
{
    //LNode<int> n1,n2;
    LinkList<int> L;
    int a=1,b=2,c=3;
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;
    cout << "-----" << endl;
    L.ListInsert((1,p2);
    L.ListInsert1,p1);
    L.ListInsert(1,p3);
    cout << "-----" << endl;
    L.ListAll();//3 2 1
    cout << "-----" ;
    return 0;
}

/*
output:
-----
at if:1
-----
3
2
1
-----
*/
