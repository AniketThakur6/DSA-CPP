#include <iostream>
using namespace std;
void swap(int &a,int &b) // pass by reference where the address of parametr and arg is same
{
    int c;
    c=a;
    a=b;
    b=c;
}

void swap(float &a,float &b)// fuction overloading is where function have same name but different pararmetre type
{
    float c=a;
    a=b;
    b=c;
}

int main()
{
    int a,b;
    cout<<"enter no: ";
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    float c=4.2224,d=3.1423;
    swap(c,d);
    cout<<c<<" "<<d;
}