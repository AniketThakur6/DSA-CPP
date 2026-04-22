#include <iostream>
using namespace std;
int maxelement(int arr[],int index,int n)
{
    if(index==n-1)
    return arr[index];

    return max(arr[index],maxelement(arr,index+1,n));
}
int main()
{
    int arr[] ={8,2,50,3,0,9};
    cout<<maxelement(arr,0,6);
}