#include <iostream>
using namespace std;
int Sum(int arr[],int index)
{
    if(index==-1)
    return 0;
    return arr[index]+Sum(arr,index-1);
}
int main()
{
    int arr[]= {3,4,6,1,8};
    cout<<Sum(arr,4)<<" ";
}