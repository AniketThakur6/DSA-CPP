#include <iostream>
using namespace std;
int first(int key,int arr[],int size)
{
    int start=0,end=size-1,mid,first=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(arr[mid]==key)
        {
            first=mid;
            end=mid-1;
        }

        else if(arr[mid]>key)
        end=mid-1;

        else
        start=mid+1;
    }

    return first;
}

int last(int key,int arr[],int size)
{
    int start=0,end=size-1,mid,last=-1;
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

    return last;
}

int main()
{
    int arr[100];
    int size;
    cout<<"enter size: ";
    cin>>size;
    cout<<"enter element : ";
    for(int i=0;i<size;i++)
    cin>>arr[i];

    //insertion sort
    for(int i=1;i<=size-1;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j-1],arr[j]);
        }
    }

    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
    int key;
    cout<<"enter the key : ";
    cin>>key;

    cout<<"first occurence: "<<first(key,arr,size)<<endl;

    cout<<"last  occurence: "<<last(key,arr,size);
}