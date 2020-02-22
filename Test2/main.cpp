#include <iostream>

using namespace std;
class P{
public:
    P(char *n, int age);
    ~P();
    int age;
    char *name;
};
P::P(char *n, int a):name(n),age(a){
    cout << "name:" << name << endl << "age:" << age << endl;
};
P::~P(){};
//¶ÔÏóÊý×é
//乱码
int main2()
{
   P p1("baby",3);
   P p2("body",4);
   P arr[] = {p1,p2};
   cout << arr[1].name << endl;
   return 0;
}
