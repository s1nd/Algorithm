#include <iostream>
using namespace std;
//1.模板
template<class T> class Ctriplet{
protected:
    T *m;
public:
    Ctriplet(T t1, T t2, T t3);
    ~Ctriplet();
    T Get(int i)const;//T Get();
    void put(int i, T e);
    bool IsAscending()const;
    bool IsDecending()const;
    void Max(T &e)const;
    void Min(T &e)const;
};

//2.实现
template<class T>
Ctriplet<T>::Ctriplet(T t1, T t2, T t3){
    m = new T[3];
    m[0]=t1,m[1]=t2,m[2]=t3;
}
template<class T>
Ctriplet<T>::~Ctriplet(){
    delete m;
}
template<class T>
T Ctriplet<T>::Get(int i)const{
    T e;
    if(i<0||i>2){cout << "index is out of boundary"<<endl;return e;}
    return m[i];
}
template<class T>
void Ctriplet<T>::put(int i, T e){
   if(i<0||i>2){cout << "index is out of boundary" <<endl; }
   else m[i] = e;
}
template<class T>
bool Ctriplet<T>::IsAscending()const{
    bool b = m[0]<=m[1];
    b &= m[1]<=m[2];//&=合取
    return b;
}
template<class T>

//3.主函数
bool Ctriplet<T>::IsDecending()const{
    bool b = m[0]>=m[1];
    b &= m[1]>=m[2];
}
template<class T>
void Ctriplet<T>::Max(T &e)const{
    e = m[0]>m[1]?m[0]:m[1];
    e = e>m[2]?e:m[2];
}
template<class T>
void Ctriplet<T>::Min(T &e)const{
    e = m[0]<m[1]?m[0]:m[1];
    e = e<m[2]?e:m[2];
}
int main()
{
    Ctriplet<int> Ct(0,1,2);
    int e = 4;
    Ct.put(2,e);
    cout << "the 3th element is:" <<  Ct.Get(2) << endl;
    if(Ct.IsAscending()){
        cout << "It is Ascending" << endl;
    }
    if(Ct.IsDecending()){
        cout << "It is Ascending" << endl;
    }
    Ct.Max(e);
    cout << "the max is:" << e << endl;
    Ct.Min(e);
    cout << "the min is:" << e << endl;
    return 0;
}

//4.输出
//the 3th element is:4
//It is Ascending
//the max is:4
//the min is:0
