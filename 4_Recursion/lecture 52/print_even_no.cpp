#include <iostream>
using namespace std;

// USING TWO PARAMETER

void print(int num,int n)
{
    if(num==n)
    {
        cout<<num;
        return ;
    }

    cout<<num<<" ";
    print(num+2,n);
}

int main()
{
    int n;
    cout<<"Enter a no: ";
    cin>>n;

    if(n%2==1)
    n--;

    print(2,n);

    return 0;
}

//USING ONE PARAMETER

// void print(int num){

//     if(num==2)
//     {
//         cout<<num<<" ";
//         return ;
//     }

//     print(num-2);
//     cout<<num<<" ";

// }

// int main()
// {
//     int n;
//     cout<<"Enter a no: ";
//     cin>>n;

//     if(n%2==1)
//     n--;

//     print(n);
//     return 0;
// }