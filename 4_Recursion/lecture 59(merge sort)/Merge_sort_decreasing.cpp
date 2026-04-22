#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{

    vector<int> temp(end-start+1);

    int left =mid, right=end, index=temp.size()-1;

    while(left>=start && right>=mid+1)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            index-- , left--;
        }

        else{
            temp[index]=arr[right];
            index-- , right--; 
        }
    }

    // if left is left 
    while(left>=start)
    {
        temp[index]=arr[left];
        index-- , left--;
    }

    // if right is left
    while(right>=mid+1)
    {
        temp[index]=arr[right];
        index-- , right--;
    }

    //copy value to original array
    index = temp.size()-1;
    while(start<=end)
    {
        arr[end]=temp[index];
        end-- , index--;
    }
}

void mergesort(int arr[], int start, int end)
{
    if(start==end)
    return ;

    int mid = start+(end-start)/2;

    //left side
    mergesort(arr,start,mid);

    //right side
    mergesort(arr,mid+1,end);

    //sorting divide arr
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