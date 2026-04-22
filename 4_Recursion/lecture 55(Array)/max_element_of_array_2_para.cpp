#include <iostream>
using namespace std;
int maxelement(int arr[],int index)
{
    if(index==0)
    return arr[index];

    return max(arr[index],maxelement(arr,index-1));
}
int main()
{
    int arr[] ={8,2,5,3,0,9};
    cout<<maxelement(arr,5);
}