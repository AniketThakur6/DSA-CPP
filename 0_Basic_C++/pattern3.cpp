#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=n-i;j++)
        {
            cout<<"   ";
        }
        for(int k=1; k<=i;k++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=1; i<=n ;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"   ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {cout<<"   ";}
        for(int k=1;k<=i;k++)
        {cout<<" "<<k<<" ";}
        cout<<endl;
    }

    cout<<endl;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        cout<<"   ";
        for(int k=1;k<=i;k++)
        {
            char c='A'+k-1;
            cout<<" "<<c<<" ";
        } 

        cout<<endl ;
    }
    cout<<endl;
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=n-i;j++)
    cout<<"   ";
    for(int k=i;k>=1;k--)
    {
        cout<<" "<<k<<" ";
    }
    cout<<endl;
   }

   cout<<endl;
   
   for(int i=1; i<=n;i++)
   {
    for(int j=1;j<=n-i;j++)
    {
        cout<<"   ";
    }
    for(int k=1;k<=i;k++)
    {
        char c='A'+i-1;
        cout<<" "<<c<<" ";
    }
    cout<<endl;
   }
   cout<<endl;
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=n-i;j++)
    {
        cout<<"   ";
    }
    for(int k=n;k>=n-i+1;k--)
    {
        cout<<" "<<k<<" ";
    }
    cout<<endl;
   }

   cout<<endl;

   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=n-i;j++)
    {
        cout<<"   ";
    }
    for(int k=1;k<=i;k++)
    {
        char c='E'-k+1;
        cout<<" "<<c<<" ";
    }
    cout<<endl;
   }
}