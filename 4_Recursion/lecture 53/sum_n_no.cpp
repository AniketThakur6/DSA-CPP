#include <iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
    return 1;

    return n+sum(n-1);
}
int main()
{
    int n;
    cout<<"Enter a no: ";
    cin>>n;

    cout<<"sum of "<<n<<" Natural no: "<<sum(n);
    return 0;
}