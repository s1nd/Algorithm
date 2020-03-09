#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    for(int i=1;i<16;i++){
        for(int j=1;j<=i;j++){
            cout << i <<"*"<< j << " = ";
            cout << hex << i*j << "    ";
            if(i == j){
                cout << endl;
            }
        }
    }

//    cout << left << setw(3)<<hex<< 255;
//    cout << hex<< 64*64-1;
   return 0;
}
