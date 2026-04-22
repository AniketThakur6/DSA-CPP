#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxdiff(vector<int> arr)
{
    int maxi=0,n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            maxi=max(maxi,arr[j]-arr[i]);
        }
    }
    return maxi;
}
int main()
{
    // vector<int>v={2, 3, 10, 6, 4, 8, 1};
    vector<int>v={7, 9, 5, 6, 3, 2};
    cout<<maxdiff(v);
}