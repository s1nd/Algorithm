#include<iostream>
#include "sqList.h"
using namespace std;
template<class T>
sqList<T>::sqList(){
//   p = new T[10];
    cout << "sqList" << endl;
}
template<class T>
sqList<T>::~sqList(){
    cout << "~sqList" << endl;
}
template<class T>
Status sqList<T>::outOfBoundary(int i){
  return 0;
}
template<class T>
T* sqList<T>::delete_sq(int i){
    cout << "delete" << endl;
  return new T();
}
template<class T>
void sqList<T>::insert_sq(T e){

}
template<class T>
void sqList<T>::insert_sq(int i, T e){

}
//template<class T>
//sqList<T>& sqList<T>::merge_sq(sqList<T> &L1,sqList<T> &L2){
//    return L1;
//}
