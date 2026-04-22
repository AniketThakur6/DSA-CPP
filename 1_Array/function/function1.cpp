#include <iostream>
using namespace std;
bool prime(int a)// pass by value where both arg and parameter have different address
{
    if(a<2)
    return 0;

    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        return 0;
    }
    return 1;
}

int facto(int a=3) //if there is no value in arg then default valu is 3
{
    int ans=1;
    for(int i=1;i<=a;i++)
    {
        ans*=i;
    }
    return ans;
}

int main()
{

    int a,b;
    cout<<"enter no : ";
    cin>>a>>b;

    cout<<prime(a)<<" ";
    cout<<facto(a)<<endl;
    cout<<prime(b)<<" ";
    cout<<facto(b)<<endl;
    cout<<prime(b-a)<<" ";
    cout<<facto(b-a)<<endl;
    cout<<facto()<<endl; // using default value of parameter



}