#include<iostream>
using namespace std;
class A
{
public:
    A(){};
    ~A(){};
    int a=1;
protected:
private:
};

int main3(){
    int a=1,b=2;
    int &p=a;
    cout << p<<endl;
    p=b;
    cout << p<<endl;

    A a1;A a2;
    cout << a1.a;
//    A &ap=a1;
//    cout <<ap.a;
//    ap = a2;

}
/**<
1
2
1992215744
Process returned 0 (0x0)   execution time : 0.034 s
Press any key to continue.
 */
