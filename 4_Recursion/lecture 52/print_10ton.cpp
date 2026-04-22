#include <iostream>
using namespace std;

void print(int n)
{
    if(n==10)
    {
        cout<<n<<" ";
        return ;
    }

    print(n-1);
    cout<<n<<" ";
    
}

int main()
{
    int n;
    cout<<"enter no greater than 10: ";
    cin>>n;

    if(n<10)
    {
        cout<<"LOL";
        return 0;
    }

    print(n);
    return 0;

}