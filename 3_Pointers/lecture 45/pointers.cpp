#include <iostream>
using namespace std;

int main() {

    int a = 10;

    cout<<&a<<endl;

    int * ptr = &a;

    cout<<ptr<<endl;

    float b=2.6;

    float * ptr1=&b;

    cout<<ptr1<<endl;  // address of b
    cout<<*ptr1<<endl; // value of inside b
    cout<<sizeof(ptr1)<<endl;

    int c= 30;

    ptr=&c; // updating pointer

    cout<<ptr<<endl;
    cout<<*ptr<<endl;


    return 0;
}