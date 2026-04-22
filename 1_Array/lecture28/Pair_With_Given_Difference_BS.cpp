#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>no(vector<int> arr,int target)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<int>v;
    for(int i=0;i<n-1;i++)
    {
        int start=i+1,end=n-1,x=target+arr[i];
        while(start<=end)
        {
            int mid=start+(end-start);
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
    vector<int>v={5, 10, 3, 2, 50, 80,90,56,5};
    int target=78;
    vector<int>ans=no(v,47);
    for(int i:ans)
    cout<<i<<" ";

}