#include<iostream>
#include<string>
using namespace std;
int main8(){
    string s1 = "hello";
    //string s2 = 'A';
    string  *s3 = new string("hello");

    /**<
    conversion from
     'std::__cxx11::string* {aka std::__cxx11::basic_string<char>*}'
     to non-scalar type//非标量类型
      'std::__cxx11::string {aka std::__cxx11::basic_string<char>}'
       requested

    */
    char c = 'A';
    char a[] = "zh_cn";
    char *p = "us_en";

    s1 += c;
    cout << s1.length()<<endl;
    cout << s3->length()<<endl;
    return 0;
}
/**<
6
5

Process returned 0 (0x0)   execution time : 0.452 s
Press any key to continue.

 */
