#include <iostream>
using namespace std;

void fun3(int n){
    cout<<"Happy"<<endl;
}

void fun2(int n){
    cout<<n<<"Happy"<<endl;
    fun3(n);
}

void fun1(int n){
    cout<<n<<"Happy"<<endl;

    fun2(n-1);
}

void fun(int n){
    cout<<n<<"Happy"<<endl;

    fun1(n-1);
}

int main(){

    int n=3;

    //iterative way
    // for(int i=5;i>0;i--)
    // cout<<i<<"Happy"<<endl;

    // cout<<"happy";

    fun(3);

    return 0;
}