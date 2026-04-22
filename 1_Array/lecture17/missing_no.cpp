#include <iostream>
using namespace std;
int missingno(int arr[],int size)
{
    int sum=0,ans=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    int n=size+1;
    ans= n*(n+1)/2 - sum;
    return ans;
    
}

int main()
{
   
    int arr[5]={1,2,3,4,5};
    cout<<missingno(arr,5);

    
}