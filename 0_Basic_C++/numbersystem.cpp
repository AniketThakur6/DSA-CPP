#include <iostream>
using namespace std;
int main()
{
    int num,rem,ans=0,mul=1;
    cout<<"enter : ";
    cin>>num;
    // decimal to binary
    // while(num>0)
    // {
    //     rem=num%2;
    //     num/=2;//num=num/2
    //     ans+=rem*mul;//ans=rem*mul+ans
    //     mul*=10; // mul=mul*10
    // }
    // cout<<ans<<" ";
    cout<<endl;
    // binary to decimal
    // while(num>0)// if it is an non zero value than condition is ture 
    // {
    //     rem=num%10;
    //     num/=10;
    //     ans+=rem*mul;
    //     mul*=2;

    // }
    // cout<<ans<<" ";

    //decimal to octal

    // while(num)
    // {
    //     rem=num%8;
    //     num/=8;
    //     ans+=rem*mul;
    //     mul*=10;
    // }
    // cout<<ans<<" ";

    //octal to decimal

    while(num)
    {
        rem=num%10;
        num/=10;
        ans+=rem*mul;
        mul*=8;
    }
    cout<<ans<<" ";
}