#include <iostream>
using namespace std;
int binarysearch(int key,int arr[],int size)
{
    int start=0,end=size-1,mid;
    //binary search;
    while(start<=end)
    {
        // mid=(start+end)/2;// in some case it can give integer overflow
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
    return -1;

}
int main()
{
    int arr[100];
    int size,key;
    cout<<"enter size of array: ";
    cin>>size;
    cout<<"enter element in arrat: ";
    for(int i=0;i<size;i++)
    cin>>arr[i];
    //bubble sorting
    for(int i=0;i<size;i++)
    {
        bool swapped=0;
        for(int j=size-1;j>i;j--)
        {
            if(arr[j-1]>arr[j])
            {
            swap(arr[j-1],arr[j]);
                swapped=1;
            }
        }
        if(swapped==0)
        break;
    }

    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"enter search elemrnt: ";
    cin>>key;
    cout<<"element index: "<<binarysearch(key,arr,size);
}
