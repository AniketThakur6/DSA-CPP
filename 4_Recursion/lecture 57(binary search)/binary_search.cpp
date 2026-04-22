#include <iostream>
using namespace std;
int bsearch(int arr[],int start,int end,int x)
{
    if(start>end)
    return -1;

    int mid = start + (end-start)/2;

    if(arr[mid]==x)
    return mid;

    else if(arr[mid]<x)
    return bsearch(arr,mid+1,end,x);

    else
    return bsearch(arr,start,mid-1,x);

}
int main()
{
    int arr[] = {2,4,6,8,10,12,14};
    int x = 100, start = 0, end=7;

    cout<<bsearch(arr,start,end,x);
}