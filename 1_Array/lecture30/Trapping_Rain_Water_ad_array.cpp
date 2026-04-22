#include <iostream>
#include <vector>
using namespace std;
int trap(vector<int> arr)
{
    int n=arr.size();
    int left[n],right[n];

    left[0]=0;
    for(int i=1;i<n;i++)
    left[i]=max(left[i-1],arr[i-1]);

    right[n-1]=0;
    for(int i=n-2;i>=0;i--)
    right[i]=max(right[i+1],arr[i+1]);

    int water=0;
    for(int i=0;i<n;i++)
    {
        int trapwater=min(right[i],left[i]) - arr[i];
        if(trapwater>=0)
        water+=trapwater;
    }
    return water;
}
int main()
{
    // vector<int> v={4,2,0,3,2,5};
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(v);
}