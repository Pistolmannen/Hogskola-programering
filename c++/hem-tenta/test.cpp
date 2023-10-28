#include <iostream>
using namespace std;

int main(){
    int tal1=11, tal2=22, temp=0;
    int array[2];
    temp=tal1;
    tal1=tal2;
    tal2=temp;
    array[0]=tal1;
    array[1]=tal2;
    cout<<array[0]<<endl<<array[1];
}
