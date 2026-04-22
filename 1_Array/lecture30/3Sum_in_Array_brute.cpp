#include <iostream>
#include <vector>
using namespace std;
int triplesum(vector<int> arr,int target) // gfg
{
    int n=arr.size();
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==target)
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    vector<int>v={1, 4, 45, 6, 10, 8};
    int target=13;
    cout<<triplesum(v,13);
}