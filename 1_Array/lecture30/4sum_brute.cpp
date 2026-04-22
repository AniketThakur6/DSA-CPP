#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int quadsum(vector<int> arr,int target) // gfg
{
    int n=arr.size();
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
            for(int k=j+1;k<n-1;k++)
            {
                for(int l=k+1;l<n;l++)
                {
                    int sum=arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==target)
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main()
{
    vector<int> v={1, 5, 1, 0, 6, 0};
    int target=7;
    cout<<quadsum(v,target);
}