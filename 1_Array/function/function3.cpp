#include <iostream>
using namespace std;
void reve(int &x)
{
    int ans=0,rem;
    while(x)
    {
        rem=x%10;
        x/=10;
        ans=ans*10+rem;

    }
    x=ans;
    
}
int main()
{
    int num;
    cout<<"enter a no: ";
    cin>>num;
    reve(num);
    cout<<"reverse is : "<<num;
}