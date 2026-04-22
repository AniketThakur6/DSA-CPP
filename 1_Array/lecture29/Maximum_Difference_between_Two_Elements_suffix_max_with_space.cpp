#include <iostream>
#include <vector>
using namespace std;
int maxdiff(vector<int> arr)
{
    int n=arr.size(),maxi=0;
    vector<int> v(n-1,0);
    for(int i=n-1;i>=0;i--)
    {
        maxi=max(maxi,arr[i]);
        v[i] = maxi;
    }
    
    maxi=0;
    for(int i=0;i<n-1;i++)
    maxi=max(maxi,v[i+1]-arr[i]);

    return maxi;

}
int main()
{
    vector<int> v={1, 2, 90, 10, 110};
    cout<<maxdiff(v);
    
}