#include <iostream>
using namespace std;

void print(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return ;
    }

    
    cout<<n<<" ";
    print(n-2);

}

int main()
{
    int n;
    cout<<"Enter a no: ";
    cin>>n;

    if (n%2==0)
    n--;

    print(n);

    return 0;

    
}