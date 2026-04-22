#include <iostream>
using namespace std;
int binary(int key,int arr[],int size)
{
    int start=0,end=size-1,mid,first=-1,last=-1;
    //first
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            first=mid;
            end=mid-1;
        }

        else if(arr[mid]<key)
        start=mid+1;

        else
        end=mid-1;
    }

    if(first==-1)//if element is not present return -1
    return -1;

    //last
    start=0;end=size-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            last=mid;
            start=mid+1;
        }

        else if(arr[mid]<key)
        start=mid+1;

        else
        end=mid-1;
    }

    int ans;
    ans=last-first+1;
    return ans;
}
int main()
{
    int arr[100];
    int size;
    cout<<"enter size: ";
    cin>>size;
    cout<<"enter element with some repeation: ";
    for(int i=0;i<size;i++)
    cin>>arr[i];

    //bubble sort
    for(int i=1;i<size;i++)
    {
        bool swapp=0;
        for(int j=size-1;j>=i;j--)
        {
            if(arr[j-1]>arr[j])
            {
                swap(arr[j-1],arr[j]);
                swapp=1;
            }
        }

        if(swapp=0)
        break;
    }

    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
    int k;
    cout<<"key: ";
    cin>>k;
    cout<<"no of "<<k<<"'s is "<<binary(k,arr,size);
}