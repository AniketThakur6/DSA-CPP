#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxSubarraySum(vector<int> &arr) {
    // Your code here
    int maxi=INT_MIN,n=arr.size();
    for(int i=0;i<n;i++)
    {
        int prefix=0;
        for(int j=i;j<n;j++)
        {
            prefix+=arr[j];
            maxi=max(maxi,prefix);
        }
    }
    return maxi;
}
int main()
{
    vector<int> v={2, 3, -8, 7, -1, 2, 3};
    cout<<maxSubarraySum(v);
    return 0;
}