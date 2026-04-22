#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int triplesum(vector<int> arr,int target)// gfg
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-2;i++)
    {
        int start=i+1,end=n-1,no=target-arr[i];
        while(start<end)
        {
            int sum=arr[start]+arr[end];
            if(sum==no)
            return 1;
            else if(sum<no)
            start++;
            else
            end--;
        }
    }
    return 0;
}
using namespace std;
int main()
{
    vector<int> v={1, 4, 45, 6, 10, 8};
    int target = 50;
    cout<<triplesum(v,target);
}