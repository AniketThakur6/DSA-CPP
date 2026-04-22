#include <iostream>
using namespace std;
int search(int key,int arr[],int n)
{
    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        return mid;
       
        else if(arr[mid]>arr[0])
        {
            if(arr[mid]>=key && arr[start]<=key)
            end=mid-1;
            else
            start=mid+1;
        }

        else
        {
            if(arr[mid]<=key && arr[end]>= key)
            start=mid+1;
            else
            end=mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[10]={8,9,0,1,2,3,4,5,6,7};
    int key;
    cout<<"enter no: ";
    cin>>key;

    cout<<"search element index: "<<search(key,arr,10);

}