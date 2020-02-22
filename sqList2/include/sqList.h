#define TRUE 1
#define FALSE 0
//Statu是函数类型，其值是函数结果状态代码
#define Status int
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#ifndef SQLIST_H
#define SQLIST_H
template<class T>
class sqList{
public:
    sqList();
    ~sqList();
    int capacity;
    int length;
    Status outOfBoundary(int i);
    T* delete_sq(int i);
    void insert_sq(T e);//push
    void insert_sq(int i,T e);
    sqList<T>& merge_sq(sqList<T> &L1, sqList<T> &L2);
private:
    T *p;
};
#endif // SQLIST_H
