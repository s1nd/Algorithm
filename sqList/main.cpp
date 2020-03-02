#include <iostream>
#include "sqList.h"
#include "sqList.cpp"
using namespace std;

int main()
{
    sqList<int> L1,L2,L3;
    int a;
    L1.insert_sq(0,5);//至少有一个元素才能插入
    L1.insert_sq(1,3);//L1:3,5
    L2.insert_sq(0,4);//至少有一个元素才能插入
    L2.insert_sq(1,2);
    L2.insert_sq(1,1);//L2:1,2,4
    L2.delete_sq(2,a);//1,4
    L3.merge_sq(L1, L2, L3);//L3:1,3,4,5
    L1.listAll(); L2.listAll();L3.listAll();
    return 0;
}
/*
output:
2 has deleted
list:3    5
list:1    4
list:1    3    4    5
*/
