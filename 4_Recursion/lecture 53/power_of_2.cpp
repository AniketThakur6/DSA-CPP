#include <iostream>
using namespace std;

int power(int num,int n)
{
    if(n==0)
    return 1;

    return num*power(num,n-1);
}

int main()
{
    int n,num;
    cout<<"enter a number: ";
    cin>>num;
    cout<<"enter power of 2 : ";
    cin>>n;

    cout<<n<<"th power of 2 is : "<<power(num,n);

    return 0;
}