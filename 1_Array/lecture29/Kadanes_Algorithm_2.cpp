#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxSubarraySum(vector<int> &arr) // gfg
{
    int prefix=0,maxi=INT_MIN,n=arr.size();
    for(int i=0;i<n;i++)
    {
        prefix+=arr[i];
        maxi=max(maxi,prefix);
        if(prefix<0)
        prefix=0;
    }
    return maxi;
}
int main()
{
    vector<int>v={2, 3, -8, 7, -1, 2, 3};
    cout<<maxSubarraySum(v);

}