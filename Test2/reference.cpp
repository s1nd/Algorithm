#include<iostream>
using namespace std;
int& plain(int &a){
    return a;
}
int main(){
    int a = 1;
    int &b = a;
    plain(b);
    cout << b << endl;
    return 0;
}
