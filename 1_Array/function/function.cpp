#include <iostream>
using namespace std;

int sum(int a,int b)//function declaration
{
    int sum;
    sum=a+b; // function define
    return sum;
};
int main()
{
    int a,b;
    cin>>a>>b;

    // function call
    cout<<sum(a,b);
}