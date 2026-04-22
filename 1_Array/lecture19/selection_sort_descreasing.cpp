#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int index,n;
    cout<<"size : ";
    cin>>n;
    cout<<"enter no: ";

    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=n-1;i>=0;i--)
    {
        index=i;
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}