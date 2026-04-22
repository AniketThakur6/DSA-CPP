#include <iostream>
using namespace std;

int find(int arr[],int n)
{
    int ans,start=0,end=n-1,mid;

    ans=arr[0];
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>=ans)
        start=mid+1;

        else
        {
            ans=arr[mid];
            end=mid-1;
        }
    }

    return ans;
}
int main()
{
    int arr[10]={9,10,1,2,3,4,5,6,7,8};
    cout<<find(arr,10);
}