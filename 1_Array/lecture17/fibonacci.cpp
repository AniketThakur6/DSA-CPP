#include <iostream>
using namespace std;
int fibonacci(int arr[],int n)
{
    for(int i=2;i<n;i++)
    arr[i]=arr[i-1]+arr[i-2];

    return arr[n-1];
}
int main()
{
    int n;
    cout<<"series no: ";
    cin>>n;
    int arr[1000]={0,1};
    for(int i=2;i<n;i++)
    arr[i]=arr[i-1]+arr[i-2];

    cout<<"fibonacci series "<<n<<"th element is : "<<fibonacci(arr,n);


}