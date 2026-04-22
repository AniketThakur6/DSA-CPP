#include <iostream>
#include <vector>
using namespace std;
vector<int> no(vector<int> arr,int target)
{
    int n=arr.size();
    vector<int>v;
    
    for(int i=0;i<n;i++)
    {
        int x=target-arr[i];
        int start=i+1,end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==x)
            {
                v.push_back(i);
                v.push_back(mid);
                return v;
            }

            else if(arr[mid]<x)
            start=mid+1;
            else
            end=mid-1;

        }
    }
    return v;
}
int main()
{
    vector<int>v={2,7,11,15,27};
    int target=22;
    vector<int> result=no(v,target);
    for(int i:result)
    cout<<i<<" ";
}