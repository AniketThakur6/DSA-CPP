#include <iostream>
using namespace std;
int minelement(int arr[],int index)
{
    if(index==0)
    return arr[index];

    return min(arr[index],minelement(arr,index-1));
}
int main()
{
    int arr[]={7,2,4,1,6,-1,99};
    cout<<minelement(arr,5);
}