#define TRUE 1
#define FALSE 0
//Statu是函数类型，其值是函数结果状态代码
#define Status int
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define ALLOCATIONFALSE -3
#ifndef SQLIST_H
#define SQLIST_H
template<class T>
class sqList{
public:
    sqList();
    ~sqList();
    int length = 0;//实际长度
    Status delete_sq(int i, T &e);
    Status insert_sq(int i,T e);
    Status merge_sq(sqList<T> &L1, sqList<T> &L2,sqList<T> &L3);
    Status listAll();//如果可以,列出所有元素
private:
    int capacity = 10;//容量
    int increase = 5;//扩容
     T *base;//基地址
};
#endif
