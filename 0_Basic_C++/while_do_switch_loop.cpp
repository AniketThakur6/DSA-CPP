#include <iostream>
using namespace std;
int main()
{

    int i=1,n;
    cout<<"Enter the number: ";
    cin>>n;
    while(i<=10)
    {
        cout<<n*i<<endl;
        i++;
    }

    cout<<endl;
    int j=1;
    while(j<=n)
    {
        if(n%j==0)
        cout<<j<<" ";

        j++;
    
    }
    cout<<endl;
    int k=1;
    while(k<=n){
        if(k%2==0)
        {
        cout<<k<<" ";
        }
       
        k++;
    }
    cout<<endl;
    int l=1;
    while(l<=n)
    {
        if(l%2==1)
        {
        cout<<l<<" ";
        }
        l++;
    }
    cout<<endl;
    int m=1;
    do{
        cout<<m<<" ";
        m++;
    }while(m<=n);
    cout<<endl;
    int o=1,b=0;
    do{
        b=b+o;
        o++;
    }while(o<=n);
    cout<<b<<endl;
    for(i=1;i<=n;i++)
    {
        if(i%4==0)
        {cout<<endl;
        continue;
        }

        cout<<i<<" ";
    }

    switch (n)
    {
    case 1:
    cout<<"rohit";
        break;
    case 2:
cout<<"mohit";
break;
    
    default:
    cout<<"sohit";
        break;
    }

    cout<<endl;
    int p=1,c=1;
    // do
    // {
    //     c=c*p;
    //     p++;
    // }while(p<=n);
    // cout<<c<<" ";
    // cout<<endl;
    p=1;
    while(p<=n)
    {
        if(p%3==0 || p%5==0)
        {
            p++;
        continue;
        }
        else{
        cout<<p<<" ";}

        p++;
    }
    cout<<endl;
    p=1;
    while(p<=n)
    {
        if(p>='a' && p<='z')
        {
            char c = p;
            cout << c << " ";
        }
        else if(p>='A' && p<='Z')
        {
            char c =p ;
            cout<<c<<" ";
        }
        else
        {
            p++;
            continue;
        }

        p++;
    }
    cout<<endl;
   if(n<2)
   {
    cout<<"not prime";
    return 0;
   }
   else{
    p=2;
    while(p<n)
    {
        bool al=1;
        if(n%p==0)
        {
            bool al=0;
            cout<<" not prime ";
            break;

        }
        p++;
        if(1)
        {cout<<" prime ";
        break;}
    
    }
   
   }
  
}