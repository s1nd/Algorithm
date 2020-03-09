#include<iostream>
using namespace std;
class A{
public:
    A(){cout <<"A:"<<a<<endl;};
    int a=1;
};
class B:public A{
public:
    B(){cout <<"B:"<<a<<endl;};
    int a=2;
    int b=1;
};
int main5(){
    A *b = new A;
    b = new B;
    //cout<<b->b<<endl;// 'class A' has no member named 'b'|
    return 0;
}
/**<
A:1
B:2

Process returned 0 (0x0)   execution time : 0.395 s
Press any key to continue.


 */
