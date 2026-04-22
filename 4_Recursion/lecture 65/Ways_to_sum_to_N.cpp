#include <iostream>
#include <vector>
using namespace std;

int ways(vector<int>&arr,int&size,int sum)
{
    if(sum == 0)
    return 1;
    if(sum<0)
    return 0;

    int ans = 0;

    for(int i=0;i<size;i++)
    ans+=ways(arr,size,sum-arr[i]);
    
    return ans;
}

int main()
{
    vector<int> arr = {1,5,6};
    int size = arr.size();
    int sum = 7;

    cout<<ways(arr,size,sum);
}