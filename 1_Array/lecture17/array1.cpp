#include <iostream>
using namespace std;

int main()
{
    int arr[8]={55,86,95,2,3,96,45,-5};
    // cout<<ar[4]<<endl;
    // float a;
    // cout<<sizeof(ar)/sizeof(ar[0]);
    int ans= INT_MAX; // MIN VALUE IN ARRAY
    for(int i=0;i<8;i++)
    {
        if(arr[i]<ans)
        ans=arr[i];

    }
    cout<<ans<<endl;

    int ans1= INT_MIN; // MAX VALUE IN ARRAY
    for(int i=0;i<8;i++)
    {
        if(arr[i]>ans1)
        ans1=arr[i];

    }
    cout<<ans1;

}