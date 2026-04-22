#include <iostream>
using namespace std;

// USING TWO PARAMETER

// void print(int num,int N)
// {
//     if(num==N)
//     {
//         cout<<num;
//         return ;
//     }
//     cout<<num<<" ";
//     print(num+1,N);
// }

// int main()
// {
//     int N;
//     cout<<"Enter no. to print: ";
//     cin>>N;

//     print(1,N);

//     return 0;
// }


// USING ONE PARAMETER

void print(int num)
{

    if(num==1)
    {
        cout<<num;
        return ;
    }

    print(num-1);
    cout<<num;
}

int main()
{
    int N;
    cout<<"Enter a no.: ";
    cin>>N;

    print(N);

    return 0;
}