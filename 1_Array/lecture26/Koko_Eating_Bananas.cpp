#include <iostream> // leetcode
using namespace std;
int minEatingSpeed(int hours,int arr[],int size)
{
    int start=0,mid,ans,end=0;
    long long sum=0; //overflow
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        end=max(end,arr[i]);
    }
    start=sum/hours;
    if(start==0)
    start=1;
    while(start<=end)
    {
        mid=start+(end-start)/2;

        int total_time=0;

        for(int i=0;i<size;i++)
        {
            total_time+=arr[i]/mid;
            if(arr[i]%mid)
            total_time++;
        }

        if(total_time>hours)
        start=mid+1;

        else
        {
            ans=mid;
            end=mid-1;
        }
    }
    return ans = start;
}
int main()
{
    int arr[]={3,6,7,11};
    int h=8,n=4;
    cout<<minEatingSpeed(h,arr,n);
}