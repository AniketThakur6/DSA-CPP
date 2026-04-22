#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int k=1;k<=i*2-1;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            {cout<<"  ";}

        for(int k=1;k<=i;k++)
            {cout<<k<<" ";}
         
        for(int l=i-1;l>=1;l--)
            {cout<<l<<" ";}
            
    cout<<endl;    
    }
    cout<<endl;

    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int  k=1;k<=i*2-1;k++)
        {
            cout<<"* ";
        }
        cout<<endl;

    }
    cout<<endl;

    if(n==n)
    {
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        cout<<"* ";
        for(int k=1;k<=(n-i)*2;k++)
        cout<<"  ";
        for(int l=1;l<=i;l++)
        cout<<"* ";

        cout<<endl;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<"* ";
        for(int k=1;k<=(n-i)*2;k++)
        cout<<"  ";
        for(int l=1;l<=i;l++)
        cout<<"* ";

        cout<<endl;
    }
    }
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<"* ";

        for(int k=1;k<=(n-i)*2;k++)
        cout<<"  ";

        for(int j=1;j<=i;j++)
        cout<<"* ";
        cout<<endl;
    }

    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        cout<<"* ";
        
        for(int k=1;k<=(n-i)*2;k++)
        cout<<"  ";

        for(int l=1; l<=i;l++)
        cout<<"* ";
        cout<<endl;
    }
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        cout<<"  ";

        for(int l=1; l<=i;l++)
        cout<<" *  ";

        cout<<endl;
    }

    for(int i=n;i>=1;i--)
    {
        for(int j=1; j<=n-i;j++)
        cout<<"  ";

        for(int l=1; l<=i;l++)
        cout<<" *  ";

        cout<<endl;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        cout<<"  ";

        for(int l=1;l<=i*2-1;l++)
        cout<<l<<" ";
        cout<<endl;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        cout<<"  ";

        for(int l=1; l<=i;l++)
        {
            char c='A'+l-1;
            cout<<c<<" ";
        }
        
        for(int k=i-1;k>=1;k--)
        {
            char c='A'+k-1;
            cout<<c<<" ";
        }
        cout<<endl;
    } 
}
