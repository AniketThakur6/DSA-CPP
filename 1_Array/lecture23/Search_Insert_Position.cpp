#include <iostream>
using namespace std;
int binary(int key,int arr[],int size)
{
    int start=0,end=size-1,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            return mid;
            break;
        }

        else if(arr[mid]<key)
        start=mid+1;
           
        else
        end=mid-1;
    }

    return start;
}
int main()
{
    int arr[100]={56,2,5,48,38,19,1,59,92,10};
    int size;
    cout<<"enter size: ";
    cin>>size;
    // cout<<"enter element: ";
    // for(int i=0;i<size;i++)
    // cin>>arr[i];

    //insertion sort
    for(int i=size-2;i>=0;i--)
    {
        for(int j=i;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }

    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
    int key;
    cout<<"enter key: ";
    cin>>key;

    cout<<"Search Insert Position : "<<binary(key,arr,size);

}
