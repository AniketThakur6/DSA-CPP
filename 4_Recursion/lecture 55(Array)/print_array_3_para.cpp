#include <iostream>
using namespace std;
void print(int arr[],int index,int n)
{
    if(n==index)
    return;

    print(arr,index+1,n); // from last index to 0 index
    cout<<arr[index]<<" ";
    // print(arr,index+1,n); // from 0 index to last index

}
int main()
{
    int arr[] = {1,4,5,3,7};
    
    print(arr,0,5);
}