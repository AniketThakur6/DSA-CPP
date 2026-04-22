#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int pos = start;

    for(int i= start; i<=end; i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quicksort(int arr[], int start, int end)
{
    if(start>=end)
    return ;

    int pivot = partition(arr,start,end);

    //left side
    quicksort(arr,start,pivot-1);

    //right side
    quicksort(arr,pivot,end);

}

int main()
{
    int arr[] = {6,4,2,8,13,7,11,9,3,6};
    int start = 0, end = 9;
    quicksort(arr, start, end);
    for(int i=0;i<=end;i++)
    cout<<arr[i]<<" ";
}