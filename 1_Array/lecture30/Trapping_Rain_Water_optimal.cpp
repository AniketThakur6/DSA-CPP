#include <iostream>
#include <vector>
using namespace std;
int trap(vector<int> arr)
{
    int n=arr.size();
    int leftmax=0,rightmax=0,water=0,index=0,maxheight=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxheight)
        {
            maxheight=arr[i];
            index=i;
        }
    }
    //left
    for(int i=0;i<index;i++)
    {
        if(leftmax>arr[i])
        {
            water+=leftmax-arr[i];
        }
        else
        leftmax=arr[i];

    }
    //right
    for(int i=n-1;i>index;i--)
    {
        if(rightmax>arr[i])
        water+=rightmax-arr[i];
        else
        rightmax=arr[i];
    }

    return water;
}
int main()
{
    // vector<int>v={4,2,0,3,2,5};
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(v);
}