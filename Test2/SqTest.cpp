#include<iostream>
using namespace std;

//cppĬ�ϲ���ֵ

/**
 * 1 .ֻ�ܶ����ں���Ĳ����ṩĬ��ֵ
 * 2.�����ٹ��캯����������ʵ����ͬʱ�ṩĬ��ֵ
 */

 //2.people
class People
{
public:
    People();
    People(char *name, int age);
    ~People();
protected:
private:
    char *name = "";
    int age = 0;
};
People::People(){};
People::People(char *n, int a):name(n),age(a){
    cout << "a people was born" << endl;
}
People::~People(){};

//1.���Ա�
class L
{
public:
    L();
    ~L();
    int listsize;
//    L& mergeL(L &a, L &b);
    void addElem(People p);
     int length = 0;
protected:
private:

    People *p;
};
L::L(){
    p = new People[10];
}
L::~L(){delete p;}
//L& mergeL(L &L1, L &L2){
//
//    return 0;
//}
void L::addElem(People peo){
   *(p+length) = peo;
   ++length;
}



//3.main
int main3(){
    People p1,p2("tom",11);
    L L1,L2;//L L1();error
     cout << L1.length << endl;
    L1.addElem(p1);
    cout << L1.length << endl;
    L1.addElem(p2);
    cout << L1.length << endl;
    return 0;
}

