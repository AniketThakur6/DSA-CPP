#include <iostream>
#include <vector>
using namespace std;
vector<int> no(vector<int> arr,int target)
{
    int n=arr.size();
    vector<int>ans;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int>arr={2,7,11,15};
    int target=18;
    vector<int> result=no(arr,target);
    for(int i:result)
    cout<<i<<" ";
    return 0;
}