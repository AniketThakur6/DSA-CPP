#include <iostream>
using namespace std;

int peakindex(int arr[],int size)
{
    int start=0,end=size-1,mid;
    while(start<=end)
    {
        mid=end+(start-end)/2;//bcoz start formula gives 0 in 1 6 4 2 in which make comparison to -1 which gives error;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        return mid;

        else if(arr[mid]>arr[mid-1])
        start=mid+1;
        else
        end=mid-1;

    }
    return -1;
}

int main()
{
    int arr[10]={1,3,5,7,8,25,45,20,20,10};

    int size=10;
    cout<<"peak element index: "<<peakindex(arr,size);

}