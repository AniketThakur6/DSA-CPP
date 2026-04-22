#include <iostream>
using namespace std;
// int linearsearch(int arr[],int x,int index,int n)
int linearsearch(int arr[],int x, int index)
{

    // if(index==n)
    // return -1;

    if(index==-1)
    return index;

    if(arr[index]==x)
    return index;

    return linearsearch(arr,x,index-1);
    // return linearsearch(arr,x,index+1,n);
    
}
int main()
{
    int arr[]={2,4,7,3,11,8,12};

    cout<<linearsearch(arr,8,6);
    // cout<<linearsearch(arr,8,0,7);
}