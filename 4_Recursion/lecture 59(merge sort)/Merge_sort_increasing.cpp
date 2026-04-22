#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int start,int mid, int end)
{
    vector<int> temp(end-start+1); // array of size of merged array
    int left=start, right=mid+1, index=0;

    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left] ;
            index++ , left++;
        }

        else{
            temp[index]=arr[right];
            index++ , right++;
        }
    }

    // if left side is left for compare 
    while(left<=mid)
    {
        temp[index] = arr[left];
        index++ , left++ ;
    }

    // if right side is left for compare 
    while(right<=end)
    {
        temp[index] = arr[right]; 
        index++ , right++;
    }

    // copy the sorted array in original array
    index=0;

    while(start<=end)
    {
        arr[start]=temp[index];
        start++ , index++; 
    }
}

void mergesort(int arr[], int start, int end)
{
    if(start==end)
    return ;

    int mid = start +(end-start)/2; 
    // left side
    mergesort(arr,start,mid);

    // right side 
    mergesort(arr,mid+1,end);

    //merging of array
    merge(arr,start,mid,end);

}

int main()
{
    int arr[] = {6,4,7,2,9,8,3,5,1};

    int start=0, end=8;
    mergesort(arr,start,end);
    for(int i=0;i<=end;i++)
    cout<<arr[i]<<" ";
}