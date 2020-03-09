#include<iostream>
using namespace std;
int main7(){
    int *p = new int[10];
    int *pp = new int(3);
    delete[] p;
    cout <<*pp<<endl;
    delete pp;
       cout <<*pp;
    return 0;
}
/**
3
3
Process returned 0 (0x0)   execution time : 0.399 s
Press any key to continue.

 */
