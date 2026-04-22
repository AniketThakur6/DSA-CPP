#include <iostream>
using namespace std; // gfg

int main()
{
    int a,b;
    cout<<"enter two no: ";
    cin>>a>>b;

    int x=a,y=b;

    while(b)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }

    cout<<"gcd of "<<x<<" and "<<y<<" is: "<<a;
    return 0;
}