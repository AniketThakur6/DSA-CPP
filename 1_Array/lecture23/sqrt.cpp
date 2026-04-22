#include <iostream>
using namespace std;
int main()
{
    int n,start=0,end,mid,ans;
    cout<<"enter no: ";
    cin>>n;
    end=n;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid*mid==n)
        {
            ans=mid;
            break;
        }

        else if(mid*mid<n)
        {
            ans=mid;
            start=mid+1;
        }

        else
        end=mid-1;
    }

    cout<<"no: "<<ans;

}