#include <iostream>
using namespace std;

void fun(int* &p1){

    p1 = p1 +1 ;
}
// using reference variable
int main(){

    int n = 10;
    int *p = &n;
    int **ptr = &p;
    fun(p);
    cout<<*p<<endl; 
}