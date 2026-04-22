#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool triplesum(vector<int> arr,int target) // gfg
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            int no=target-arr[i]-arr[j];
            int start=j+1,end=n-1;
            while(start<=end)
            {
                int mid=start+(end-start)/2;
                if(arr[mid]==no)
                return 1;
                else if(arr[mid]<no)
                start=mid+1;
                else
                end=mid-1;
            }
        }
    }
    return 0;
}
int main()
{
    vector<int>v={1, 4, 45, 6, 10, 8};
    int target=10;
    cout<<triplesum(v,target);
}