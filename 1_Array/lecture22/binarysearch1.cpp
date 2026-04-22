#include <iostream>
using namespace std;
int binarysearch(int key,int arr[],int size)
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
        end=mid-1;

        else
        start=mid+1;
    }
    return -1;

}
int main()
{
    int arr[100];
    int size;
    cout<<"enter size: ";
    cin>>size;
    cout<<"enter element of array: ";
    for(int i=0;i<size;i++)
    cin>>arr[i];
    
    //selection sort;
    for(int i=0;i<size-1;i++)
    {
        bool swapped=0;
        int index=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[index]<arr[j])
            {
                swapped=1;
                index=j;
            }
        }
        if(swapped==0)
        break; 

        swap(arr[i],arr[index]);
    }

    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

    cout<<endl;

    int key;
    cout<<"enter search element: ";
    cin>>key;
    cout<<"element index: "<<binarysearch(key,arr,size);


}