#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool divide(vector<int> arr)
{
    int prefix=0,total_sum=0,n=arr.size();
    for(int i=0;i<n;i++)
    total_sum+=arr[i];
    for(int i=0;i<n-1;i++)
    {
        prefix+=arr[i];
        int ans=total_sum-prefix;
        if(ans==prefix)
        return 1;
    }
    return 0;
}
int main()
{
    vector<int> v={2,4,6,8,4,1};
    cout<<divide(v);
}
