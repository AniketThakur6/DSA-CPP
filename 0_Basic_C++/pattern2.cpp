#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=5;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl ;

    for(int i=1;i<=5; i++)
    {
        for(int j=i; j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl ;

    for(char i='a';i<='e';i++)
    {
        
        for (char j='a'; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl ;
        
    }

    cout<<endl;

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i; j++)
        {
            char c='a'+i-1 ;
            cout<<c<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=5;i>=1;i--)
    {
       for(int j=1;j<=i;j++)
       {
        cout<<"*"<<" ";
       }
       cout<<endl;
        
    }

    cout<<endl;

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-(i-1);j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=5-i+1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<=7;i++)
    {
        if(i<=6)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"1 2 3 4 5 6"<<endl;
        }
    }

    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            char c='A'+j-1;
            cout<<c<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=5;i++)
    {
        for(int j=10;j<=10+i-1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }


}