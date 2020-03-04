#include <iostream>

using namespace std;

//default arguments
void f(int a=1, float b=1.2, char c='c'){
    cout << a<<endl;
    cout << b<<endl;
    cout << c<<endl;
}
//void f2(int a=1, float b, char c='c'){  // default argument missing for parameter 2 of 'void f2(int, float, char)'|
//    cout << a<<endl;
//    cout << b<<endl;
//    cout << c<<endl;
//}

//
class A{
public:
    A(){};
    A(int i){a=i;};
    int a;
};
int main0()
{

    //    f(3,1.5,' ');

      f('f');

////        f2(2.2);

    int a = 1;
    //int *p = a;// invalid conversion from 'int' to 'int*' [-fpermissive]|

    A *pt = new A;
    A aa(11);A bb(22);
    A &ptr = aa;
    ptr = bb;
    cout << ptr.a;
    //cout << ptr; no match for 'operator<<' (operand types are 'std::ostream {aka std::basic_ostream<char>}' and 'A')|
    return 0;
}

/**<
102
1.2
c
22
Process returned 0 (0x0)   execution time : 0.264 s
Press any key to continue.
 */
