#include <iostream>
using namespace std;
bool rect(int a,int b,int c,int d)
{
    if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
    return true;
    else return false;
}

int main()
{int a,b,c,d,ans;
    cout<<"enter side of rect: ";
    cin>>a>>b>>c>>d;
    cout<<rect(a,b,c,d);
}