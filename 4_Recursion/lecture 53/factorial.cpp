#include <iostream>
using namespace std;

int fact(int n)
{   
    // base case
    if(n==1 || n==0)
    return 1;

    return n*fact(n-1);
}

int main()
{
    int n;
    cout<<"Enter a num for factorial: ";
    cin>>n;

    if(n<0)
    {
        cout<<"Factorial is not possible\n";
        return 0;
    }

    cout<<"factorial of "<<n<<" is: "<<fact(n);

    return 0;
}