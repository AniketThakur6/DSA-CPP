#include <iostream>
using namespace std;
int Aggressive_Cows(int k,int arr[],int n)
{
    int start=1,mid,end,ans=-1;
    end=arr[n-1]-arr[0];

    while(start<=end)
    {
        mid=start+(end-start)/2;
        int count=1, post=arr[0];
        for(int i=1;i<n;i++)
        {
            if(post+mid<=arr[i])
            {
                count++;
                post=arr[i];
            }
        }

        if(k<=count)
        {
            ans=mid;
            start=mid+1;
        }
        else
        end=mid-1;
    }
    return ans;
}

int main()
{
    int arr[]={2, 12, 11, 3, 26, 7};
    int k=5,size=6;

    for(int i=0;i<size;i++)
    {
        int index=i;
        for(int j=i;j<size;j++)
        {
            if (arr[index]>arr[j])
            index=j;
        }
        swap(arr[i],arr[index]);
    }
    // for(int i=0;i<5;i++)
    // cout<<arr[i]<<" ";

    cout<<Aggressive_Cows(k,arr,size);
}