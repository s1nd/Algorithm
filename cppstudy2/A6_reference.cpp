#include<iostream>
using namespace std;
int main6(){
    int a = 1,b=2;
    int &r = a;
    const int &r2 = b;
    //r2 = 3;// assignment of read-only reference 'r2'
    b=3;
    r = b;//r并没有指向b，而是将b的值赋给a,*p=b
    cout<< r<<endl;
    cout<<a;
}
/**<
3
3
Process returned 0 (0x0)   execution time : 0.454 s
Press any key to continue.


 */
