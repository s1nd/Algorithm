#include<iostream>
#include "sqList.h"
//typedef T* Tptr
using namespace std;
template<class T>
sqList<T>::sqList(){
   base = new T[10];
}
template<class T>
sqList<T>::~sqList(){
    delete base;
}
template<class T>
Status sqList<T>::delete_sq(int i, T &e){
    if((i<1)||(i>length))return ERROR;
    T *p; T *q;
    p = base + i - 1;
    e = *p;
    q = base + length - 1;
    for(++p;p<=q;++p){
        *(p-1) = *p;
    }
    --length;
    cout <<  e <<" has deleted" << endl;
  return OK;
}

template<class T>
Status sqList<T>::insert_sq(int i, T e){
    //³õÊ¼Ê±i=1,length=0,i>length³ö´í;
       if(!length) {
            *(base + length) = e;
            ++length;
            return OK;
       }

       if((i<1)||(i>length))return ERROR;
       if(length>capacity){
        capacity += increase;
        base = new T[capacity];//T[n];
        if(!base) return ALLOCATIONFALSE;
       }
       T *q;T *p;
       q = base + i - 1;

       p = base + length -1;
       for(;p>=q;--p)*(p+1) = *p;
       *q = e;
       ++length;
       return OK;
}
template<class T>
Status sqList<T>::merge_sq(sqList<T> &L1, sqList<T> &L2, sqList &L3){
    T *p1;T *p2;T *p3;
    p1 = L1.base;p2 = L2.base;
    L3.capacity = L3.length = L1.length + L2.length;
    p3 = L3.base = new T[L3.capacity];
    if(!L3.base) return ALLOCATIONFALSE;
    T *p1_last;T *p2_last;
    p1_last = L1.base + L1.length - 1;
    p2_last = L2.base + L2.length - 1;
    while(p1 <= p1_last && p2 <= p2_last){
        if(*p1 < *p2)*p3++ = *p1++;
        else *p3++ = *p2++;
    }
    while(p1 <= p1_last)*p3++ = *p1++;
    while(p2 <= p2_last)*p3++ = *p2++;
    return OK;
}
template<class T>
Status sqList<T>::listAll(){
    T *p;  T *last;
    p = base;
    last = base +length-1;
    cout << "list:";
    for(;p<= last;++p){
        cout << *p << "    ";
    }
    cout << endl;
    return OK;
}
