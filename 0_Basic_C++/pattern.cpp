#include <iostream>
using namespace std;
int main()
{
    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=1 ; i<=5;i++)
    {
        for(int j=5 ; j>=1 ; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    for(int i=1 ;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cout<<j*j<<" ";
        }
        cout<<endl ;
    }
    
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cout<<j*j*j<<" ";
        }
        cout<<endl ;
    }


    
    for(char a='a'; a <='e'; a ++)
    {
        for(int i=1;i<=5;i++)
        {
            cout<<a<<" ";
        }
        cout<<endl ;
    }

    cout<<endl;
    for(int i=1;i<=5;i++)
    {
        for(char a='a';a<='e';a++)
        {
            cout<<a<<" ";
        }
        cout<<endl ;
    }

    cout<<endl;

    // int count=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cout<<(i-1)*5+j<<" ";
            // cout<<count<<" ";
            // count=count+1;
        }
        cout<<endl;
    }

}