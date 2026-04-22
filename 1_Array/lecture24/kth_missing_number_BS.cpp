#include <iostream>
using namespace std;
int kthno(int k, int arr[],int size)
{
    int start=0,end=size-1,mid,ans=size;//use ans=size in case when array is sorted
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]-mid-1>=k)
        {
            ans=mid;
            end=mid-1;
        }
        else
        start=mid+1;
    }

    return ans+k;

}
int main()
{
    int arr[5]={2,3,4,7,11};
    int k;

    cout<<"enter kth no: ";
    cin>>k;
    cout<<kthno(k,arr,5);

}