#define TRUE 1
#define FALSE 0
//Statu�Ǻ������ͣ���ֵ�Ǻ������״̬����
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
    int length = 0;//ʵ�ʳ���
    Status delete_sq(int i, T &e);
    Status insert_sq(int i,T e);
    Status merge_sq(sqList<T> &L1, sqList<T> &L2,sqList<T> &L3);
    Status listAll();//�������,�г�����Ԫ��
private:
    int capacity = 10;//����
    int increase = 5;//����
     T *base;//����ַ
};
#endif
