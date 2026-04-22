#include <iostream>
#include <vector>
using namespace std; // leetcode
int trap(vector<int> arr)
{
    int n=arr.size(),water=0;
    for(int i=0;i<n;i++)
    {
        int leftmax=0,rightmax=0;
        //leftmax
        for(int j=i-1;j>=0;j--)
        leftmax=max(leftmax,arr[j]);
        //rightmax
        for(int j=i+1;j<n;j++)
        rightmax=max(rightmax,arr[j]);

        // min height of building on left & right
        int mini=min(leftmax,rightmax);
        if(mini-arr[i]>=0)
        water+=mini-arr[i];
    }
    return water;
}
int main()
{
    // vector<int> v={4,2,0,3,2,5};
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(v);
}