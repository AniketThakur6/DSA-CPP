#include <iostream>
using namespace std;
int sum(int arr[],int index,int size,int target)
{
    if(index == size)
    return target == 0;

    return sum(arr,index+1,size,target)+sum(arr,index+1,size,target-arr[index]);
}
int main()
{
    int arr[] = {0,4,6,0};
    
    int target = 0;

    int count = sum(arr,0,4,target);

    cout<<count;
}