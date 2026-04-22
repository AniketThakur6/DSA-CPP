#include <iostream>
using namespace std;
int main()
{
    // for(char i='a'; i<= 'z'; i++)
    // {
    //     cout<<i<<" ";
    //     cout<<char(i)<<endl ;
    //     char c = i ;
    //     cout<<c<<endl;
    // }

    // int a ;
    // cout<<"enter table no.: ";
    // cin >> a ;
    // for(int i= a; i>= 1 ; i--)
    // {
    //     cout<<i<<" ";
    // }

    // cout<<"Table of "<<a<<" is : \n";
    //  for(int i=1; i<= 10; i++)
    // {
        
    //     cout<<a<<" * "<<i<<" = "<<a*i<<endl ;
    // }

    // for(int i=a; i<= a*10;i=i+a)
    // {
    //     cout<<i<<endl;
    // }

    // int b ;
    // cout<<"enter power : ";
    // cin>>b ;
    // int n = a ;

    // for(int i = 1; i< b; i++)
    // {
    //     n = n*a;
    // }

    // cout<<n<<endl ;

//   int b =0;
//   for(int i=1;i<=a; i++)
//   {
//         b=b+i*i;
//   }
//   cout<<b<<endl ;
// int b = 1 ;
// for(int i=1;i<=a;i++)
// {
//     b=b*i;
// }
// cout<<b<<endl;

//  if(a<2) //prime no
// {
//     cout<<"not prime"<<endl;
//     return 0;
// }
// else
// {
// for(int i=2; i<a ;i++)
// {
//     if(a%i==0)
//     {
//         cout<<"not prime"<<endl;
//         return 0;
//     }
// }
// cout<<"prime"<<endl ;
// }

//fibonacci series

int a =0, b=1, in,next=0;
cout<<"enter series no.: ";
cin>>in;
 cout << "Fibonacci Series: " << a << "," << b << ",";

 for(int i=0; i< in-2; i++)
 {
    next=a+b;
    a=b;
    b=next;

    cout<<next<<",";
 }
return 0;
}