#include<iostream>
using namespace std;
int main(){
    const int a = 2;
    int b = a;
    int *q = &b;
    const int *p = b;// invalid conversion from 'int' to 'const int*' [-fpermissive]|
}
