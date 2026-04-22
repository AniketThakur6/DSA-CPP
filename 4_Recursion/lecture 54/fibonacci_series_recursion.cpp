#include <iostream>
using namespace std; // leetcode 

int fib(int n)
{
    if(n<=1)
    return n;

    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cout<<"Enter in series no: ";
    cin>>n;

    cout<<n<<" no of series is fib series is: "<<fib(n);

    return 0;
}