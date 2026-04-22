#include <iostream>
using namespace std;
int painterpart(int k,int arr[],int size)
{

    int start=0,end=0,ans,mid;
    for(int i=0;i<size;i++)
    {
        start=max(start,arr[i]);
        end+=arr[i];
    }

    while(start<=end)
    {
        mid=start+(end-start)/2;

        int wall=0,count=1;
        for(int i=0;i<size;i++)
        {
            wall+=arr[i];
            if(wall>mid)
            {
                count++;
                wall=arr[i];
            }
        }

        if(count<=k)
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
    int arr[5]={5, 10, 30, 20, 15};
    int k;// k=3;
    cout<<"enter the no of painter : ";
    cin>>k;
    cout<<"Min time to paint wall : "<<painterpart(k,arr,5);
    
}