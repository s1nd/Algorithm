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


int main(){
    Poultry *p = new Poultry;
    p->eat();
    p = new Dog;
    p->yell();
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
