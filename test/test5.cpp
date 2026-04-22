#include <iostream>
using namespace std;
void hello(int arr[])
{
    arr[3]=100;
}
int main()
{
    int arr[] = {1,2,3,45,5,6};

    hello(arr);

    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
}