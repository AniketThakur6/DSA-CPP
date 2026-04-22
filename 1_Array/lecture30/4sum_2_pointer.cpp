#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool quadsum(int arr[], int n, int X)  
{
    sort(arr, arr + n);  
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
            int no=X-arr[i]-arr[j];
            int start=j+1,end=n-1;
            while(start<end)
            {
                int sum=arr[start]+arr[end];
                if(sum==no)
                return true;
                else if(sum<no)
                start++;
                else
                end--;
            }
        }
    }
    return false;
}
int main()
{
    int v[6]={1, 5, 1, 0, 6, 0};
    int target=13,n=6;
    cout<<quadsum(v,n,target);
}