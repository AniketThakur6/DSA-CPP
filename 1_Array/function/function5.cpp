#include <iostream>
using namespace std;
int combi(int n,int r)
{
int n1=1,n2=1,n3=1,ans;
for(int i=1;i<=n;i++)
{
    n1*=i;
}
for(int i=1;i<=r;i++)
{
    n2*=i;
}
for(int i=n-r;i>=1;i--)
{
    n3*=i;
}
ans=n1/(n2*n3);
  return ans;
}

int main()
{
    int n,r;
    cout<<"enter 2 no: ";
    cin>>n>>r;
    cout<<endl;
    cout<<"answer : "<<combi(n,r);
}