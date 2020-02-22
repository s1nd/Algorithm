#define TRUE 1
#define FALSE 0
//Statu是函数类型，其值是函数结果状态代码
#define Status int
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#ifndef LINEARLIST_H
#define LINEARLIST_H

template<class T>
class LinearList
{
    public:
        LinearList(T &L);
        ~LinearList();
        void ClearList(T &L);
        int ListLength(T L);
        void ListInsert(T &L, int i, T e);
        void GetElem(T L,int i, T &e);
    protected:

    private:
};

#endif // LINEARLIST_H
