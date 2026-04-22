#include <iostream>
using namespace std;

void print_even(int n)
{
    if(n<=2)
    {
        cout<<n;
        return ;
    }

    cout<<n<<endl;

    print_even(n-2);
}


int main()
{
    int n;
    cout<<"Enter a even no: ";
    cin>>n;

    if(n%2==1)

    print_even(n);

    return 0;
}