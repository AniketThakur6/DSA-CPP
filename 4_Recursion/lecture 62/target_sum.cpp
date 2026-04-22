#include <iostream>
using namespace std;
bool find(int arr[],int index,int size,int target)
{
    if(target == 0)
    return 1;

    if(index==size || target<1)
    return 0;

    return find(arr,index+1,size,target) || find(arr,index+1,size,target - arr[index]);

}
int main()
{
    int arr[] = {3,6,4,5};
    int target = 18;
    int index=0;
    int size = 4;
    
    cout<<find(arr,index,size,target);
}