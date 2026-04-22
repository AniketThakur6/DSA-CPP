#include <iostream>
using namespace std;
int Sum(int arr[],int index,int n)
{
    if(index==n)
    return 0;

    return arr[index]+Sum(arr,index+1,n);
}
int main()
{
    int arr[]={3,4,6,1,8};
    cout<<Sum(arr,0,5);
}