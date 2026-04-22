#include <iostream>
using namespace std;
//Rotate Array by One

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    int temp =arr[size-1];
    for(int i=size-2;i>=0;i--)
    arr[i+1]=arr[i] ;
    
    arr[0]=temp;
    for(int i=0 ;i<size;i++)
    cout<<arr[i]<<" ";
}