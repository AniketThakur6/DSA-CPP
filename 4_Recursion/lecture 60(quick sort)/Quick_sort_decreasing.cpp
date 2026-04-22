#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int pos = start;

    for(int i=start;i< end;i++)
    {
        if(arr[i]>=pivot){
            swap(arr[i],arr[pos]);
            pos++;
        }    
    }

    swap(arr[pos],arr[end]);
    return pos;
}

void quicksort(int arr[], int start, int end)
{
    if(start>=end)
    return ;

    int pivot = partition(arr,start,end);

    //left side
    quicksort(arr,start,pivot-1);

    // for this fucntion call qs(arr,start,pivot) 
    // anf qs(arr,pivot,end) 
    //int pivot = arr[end]
    // use for(int i=start;i< end;i++)
    // {
    //     if(arr[i]>=pivot){
    //         swap(arr[i],arr[pos]);
    //         pos++;
    //     }    
    // }
    // swap(arr[pos],arr[end])
    // return pos 

    //right side
    quicksort(arr,pivot+1,end);

}

int main()
{
    int arr[] = {6,4,2,8,13,7,11,9,3,6};
    int start=0, end=9;
    quicksort(arr,start,end);
    for(int i=0;i<=end;i++)
    cout<<arr[i]<<" ";
}

// for sorted  array it time complexuty is O(n^2) and space is O(log n)