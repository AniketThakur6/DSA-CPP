#include <iostream>
#include <cmath>
using namespace std;
int count(int num)
{
    int count=0;
    while(num)
    {
        count++;
        num/=10;
    }
    return count;
}
bool amstrong(int num,int count)
{
    int ans=0,rem,x=num;
    while(num)
    {
        rem=num%10;
        num/=10;
        ans+=pow(rem,count);
    }
    if(x==ans)
    return 1;
    else
    return 0;
}




int main()
{
    int num,ans;
    cout<<"enter no: ";
    cin>>num;
    ans=count(num);
    cout<<amstrong(num,ans);


}
