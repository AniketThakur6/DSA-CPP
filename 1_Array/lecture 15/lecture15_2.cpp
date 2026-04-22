#include <iostream>
#include <cmath>
using namespace std;
int count(int num)
{int n=0;
    while(num)
    {
        n++;
        num/=10;
    }
    return n;
}
bool amrstrong(int num,int order)
{
    int x,rem,ans=0;
    x=num;
    while(num)
    {
        rem=num%10;
        num/=10;
        ans=ans+pow(rem,order);
    }
    if(ans==x)
    return 1;
    else 
    return 0;
}

int main()
{
    int num,order,arm;
    cout<<"enter no: ";
    cin>>num;
    order=count(num);
    arm=amrstrong(num,order);
    if(arm==1)
    cout<<"yes";
    else
    cout<<"no";

    


}
