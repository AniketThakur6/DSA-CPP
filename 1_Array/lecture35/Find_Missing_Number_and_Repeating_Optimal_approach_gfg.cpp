#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> missing_repeat(vector<int> &arr)
{
    int n=arr.size();   // time complexity = O(n)
                        // space complexity = O(1)

    for(int i=0;i<n;i++)
    arr[i]-=1; // decreasing value of array by 1 unit

    for(int i=0;i<n;i++) // storing occurance on same array
    arr[arr[i]%n]+=n;

    vector<int> ans(2,0);

    //repeated number
    for(int i=0;i<n;i++)
    if(arr[i]/n==2)
    {
        ans[0]=i+1;
        break;
    }

    //missing number
    for(int i=0;i<n;i++)
    if(arr[i]/n==0)
    {
        ans[1]=i+1;
        break;
    }

    return ans;
}
int main()
{
    vector<int> arr={4,3,2,1,2,7,6};

    vector<int> ans=missing_repeat(arr);
    
    cout<<"repeated number : "<<ans[0]<<endl;
    cout<<"missing number : "<<ans[1];

    return 0;
}
