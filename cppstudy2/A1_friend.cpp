#include<iostream>
using namespace std;
class A{
public:
    A(int i):a(i){};
    //friend int show(){return this.a;}; invalid use of 'this' in non-member function|
    friend int show(A &objA){return objA.a;};//没有return不报错
private:
    int a = 1;
};

class C{
private:
    C(int i):a(i){};
    int a=1;
};
class B: public C{
public:
  //省略构造方法
    int a = 3;
};

int main1(){
    A aa(2);
    //cout << aa.a; 'int A::a' is private|
//    B bb(22);//no matching function for call to 'B::B(int)'|
//       B bb;// no matching function for call to 'C::C()'|
    //cout << bb.a<<endl;
    cout << show(aa);
    return 0;
}

/**<
2
Process returned 0 (0x0)   execution time : 0.269 s
Press any key to continue.

 */

