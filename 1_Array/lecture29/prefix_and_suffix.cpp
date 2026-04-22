#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {6,4,5,-3,2,8};
    for(int i:v)
    cout<<i<<" ";
    cout<<endl;
    int n=v.size();
    vector<int> prefix(n);
    prefix[0]=v[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+v[i];
    }

    for(int i:prefix)
    cout<<i<<" ";

    cout<<endl;
    vector<int> suffix(n);
    suffix[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]+v[i];
    }

    for(int i:suffix)
    cout<<i<<" ";
}