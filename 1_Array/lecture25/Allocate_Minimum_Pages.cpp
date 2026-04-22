#include <iostream>
using namespace std;
int minpages(int k,int arr[],int size)
{
    if(size<k) //gfg
    return -1;

    int start=0,end=0,mid,ans;
    for(int i=0;i<size;i++)
    {
        start=max(start,arr[i]);
        end+=arr[i];
    }

    while(start<=end)
    {
        mid=start+(end-start)/2;

        int page=0,count=1;
        for(int i=0;i<size;i++)
        {
            page+=arr[i];
            if(page>mid)
            {
                count++;
                page=arr[i];
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
    int arr[4]={12, 34, 67, 90};
    int k;// k=2
    cout<<"enter no of student: ";
    cin>>k;
    cout<<minpages(k,arr,4);
}