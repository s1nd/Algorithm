#include<iostream>
using namespace std;
class father
{
public:
    father(){};
    ~father(){};
    void call(){cout << "call father!";};
    void show(){cout << "father age:"<<a<<endl;};
protected:
private:
    int a = 40;
};

class son:public father
{
public:
    son(){};
    ~son(){};
    void show(){cout << "son age:"<<a<<endl;};
protected:
private:
    int a = 20;
     void call(){cout << "call son!";};
};

int main2(){
    son s;
    //s.call();// void son::call()' is private
    s.father::call();
    s.show();
    father *f1 = new father;
    son *s1 = new son;
    f1 = s1;
    f1->show();//基类的指针不能调用派生类的成员函数,而可以调用成员变量;
    return 0;
}
/**<
call father!son age:20
father age:40

Process returned 0 (0x0)   execution time : 0.150 s
Press any key to continue.

 */
