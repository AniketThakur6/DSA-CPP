#include <iostream>
using namespace std;
int splitArray(int arr[] ,int N, int K) {
    // code here
    int start=0,end=0,mid,ans;
    for(int i=0;i<N;i++)
    {
        start=max(start,arr[i]);
        end+=arr[i];
    }
    
    while(start<=end)
    {
        mid=start+(end-start)/2;
        int sum=0, split=1;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
            if(sum>mid)
            {
                sum=arr[i];
                split++;
            }
        }
        if(split<=K)
        {
            ans=mid;
            end=mid-1;
        }
        
        else
        start=mid+1;
    }
    return ans;
    
}
int main()
{
    int arr[]={2,3,2,1,1};
    
    
    cout<<splitArray(arr,5,4);


}