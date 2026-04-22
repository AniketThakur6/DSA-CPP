#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,56,74,93,76,96,10,-1,100,-29};
    int high=INT_MIN,high2nd=INT_MIN;
    for(int i=0;i<10;i++)
    {
        if(arr[i]>high)
        high=arr[i];
    }
    cout<<high<<endl;
    int i=0;
        while(high!=arr[i])
        {
            if(arr[i]>high2nd)
            high2nd=arr[i];
            i++;
        }
    cout<<" 2nd highest: "<<high2nd;
}