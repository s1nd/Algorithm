#include<iostream>
using namespace std;
class Poultry
{
public:
    Poultry(){};
    ~Poultry(){};
    virtual void eat(){cout<<"eating!"<<endl;};
    virtual void yell(){cout <<"SiSI"<<endl;}
};

class Dog:public Poultry
{
public:
    Dog(){};
    ~Dog(){};
    void yell(){cout<<"WangWang"<<endl;};
    void zh_cnDog(){cout<<"����!";};
protected:
private:
};

class Cat:public Poultry
{
public:
    Cat(){};
    ~Cat(){};
    void yell(){cout<<"MiaoMiao"<<endl;};
protected:
private:
};

class Sparrow:public Poultry
{
public:
    Sparrow(){};
    ~Sparrow(){};
      void yell(){cout<<"ZhaZha"<<endl;};
protected:
private:
};


int main4(){
    Poultry *p = new Poultry;
    p->eat();
    p = new Dog;
    p->yell();
    //p->zh_cnDog();// 'class Poultry' has no member named 'zh_cnDog'|
    p = new Cat;
    p->yell();
    //sparrow shut up
}
/**<
eating!
WangWang
MiaoMiao

Process returned 0 (0x0)   execution time : 0.278 s
Press any key to continue.

 */
