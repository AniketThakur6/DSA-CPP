#include <iostream>
using namespace std; // gfg
int gcd(int a,int b)
{
    if(b==0)
    return a;

    //(b,a%b)
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cout<<"enter two no: ";
    cin>>a>>b;

    cout<<"gcd of "<<a<<" and "<<b<<" is: "<<gcd(a,b);
    return 0;
}