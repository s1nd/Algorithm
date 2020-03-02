#include <iostream>
#include "LinkList.h"
#include "LinkList.cpp"
using namespace std;

int main()
{

    LinkList<int> L;
    int a=1,b=2,c=3;
    int &p1 = a;
    int &p2 = b;
    int &p3 = c;
    cout << "-----" << endl;
    L.ListInsert(1,p1);
    L.ListInsert(1,p2);
    L.ListInsert(1,p3);
    cout << "-----" << endl;
    L.ListAll();//3 2 1
    cout << "-----" ;
    return 0;
}
/*
||=== Build: Debug in DBD_LIST (compiler: GNU GCC Compiler) ===|
D:\c_exe\DBD_LIST\LinkList.h||In instantiation of 'LinkList<T>::LinkList() [with T = int]':|
D:\c_exe\DBD_LIST\main.cpp|14|required from here|
D:\c_exe\DBD_LIST\LinkList.h|36|error: no matching function for call to 'LNode<int>::LNode()'|
D:\c_exe\DBD_LIST\LinkList.h|20|note: candidate: LNode<T>::LNode(T&, LNode<T>&) [with T = int]|
D:\c_exe\DBD_LIST\LinkList.h|20|note:   candidate expects 2 arguments, 0 provided|
D:\c_exe\DBD_LIST\LinkList.h|16|note: candidate: LNode<int>::LNode(const LNode<int>&)|
D:\c_exe\DBD_LIST\LinkList.h|16|note:   candidate expects 1 argument, 0 provided|
D:\c_exe\DBD_LIST\LinkList.cpp||In instantiation of 'int LinkList<T>::ListInsert(int, T&) [with T = int]':|
D:\c_exe\DBD_LIST\main.cpp|20|required from here|
D:\c_exe\DBD_LIST\LinkList.cpp|6|error: invalid initialization of reference of type 'LNode<int>&' from expression of type 'int'|
D:\c_exe\DBD_LIST\LinkList.cpp|8|error: no match for 'operator!' (operand type is 'LNode<int>')|
D:\c_exe\DBD_LIST\LinkList.cpp|8|note: candidate: operator!(bool) <built-in>|
D:\c_exe\DBD_LIST\LinkList.cpp|8|note:   no known conversion for argument 1 from 'LNode<int>' to 'bool'|
D:\c_exe\DBD_LIST\LinkList.h|16|error: non-static reference member 'LNode<int>& LNode<int>::next', can't use default assignment operator|
D:\c_exe\DBD_LIST\LinkList.h|16|error: non-static reference member 'int& LNode<int>::data', can't use default assignment operator|
D:\c_exe\DBD_LIST\LinkList.cpp|9|note: synthesized method 'LNode<int>& LNode<int>::operator=(const LNode<int>&)' first required here |
D:\c_exe\DBD_LIST\LinkList.cpp||In instantiation of 'void LinkList<T>::ListAll() const [with T = int]':|
D:\c_exe\DBD_LIST\main.cpp|24|required from here|
D:\c_exe\DBD_LIST\LinkList.cpp|30|error: binding 'const LNode<int>' to reference of type 'LNode<int>&' discards qualifiers|
D:\c_exe\DBD_LIST\LinkList.cpp|31|error: could not convert 'p.LNode<int>::next' from 'LNode<int>' to 'bool'|
||=== Build finished: 7 error(s), 6 warning(s) (0 minute(s), 0 second(s)) ===|
*/
