#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool divide(vector<int> arr)
{
    int n=arr.size();
    
    for(int i=0;i<n-1;i++)
    {
        int sum1=0,sum2=0;
        for(int j=0;j<=i;j++)
        sum1+=arr[j];
        for(int j=i+1;j<n;j++)
        sum2+=arr[j];
        if(sum1==sum2)
        return 1;
    }
    return 0;
}

int main()
{
    vector<int>v={2,4,6,8,4,1};

    cout<<divide(v);
}