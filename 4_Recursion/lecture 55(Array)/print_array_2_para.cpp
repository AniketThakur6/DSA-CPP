#include <iostream>
using namespace std;
void print(int arr[],int index)
{
    if(index==-1)
    return;

    // print(arr,index-1); // from 0 to last index
    cout<<arr[index]<<" ";
    print(arr,index-1); // from last to 0 index
}
int main()
{
    int arr[]={1,4,5,3,7};
    print(arr,4);
}