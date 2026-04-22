#include <iostream>
using namespace std;
int capacityofship(int days,int arr[],int size)
{
    int start=0,end=0,mid,ans;
    for(int i=0;i<size;i++)
    {
        start=max(start,arr[i]);
        end+=arr[i];
    }

    while(start<=end)
    {
        mid=start+(end-start)/2;
        int capacity=0, count=1;
        for(int i=0;i<size;i++)
        {
            capacity+=arr[i];
            if(capacity>mid)
            {
                capacity=arr[i];
                count++;
            }
        }

        if(count<=days)
        {
            ans=mid;
            end=mid-1;
        }
        
        else
        start=mid+1;

    }

    return ans;

}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int days;
    cout<<"enter no of days: ";
    cin>>days;
    cout<<capacityofship(days,arr,10);

}