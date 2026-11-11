#include <iostream>
using namespace std;
int subsum(int arr[],int index,int size,int target)
{
    if(target == 0)
    return 1;

    if(index == size || target<0)
    return 0;

    return subsum(arr,index+1,size,target)+subsum(arr,index,size,target-arr[index]);
}
int main()
{
    int arr[] = {2,3,4};
    int target = 6;

    cout<<"Count: "<<subsum(arr,0,3,target);
}