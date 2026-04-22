#include <iostream>
#include <vector>
#include <algorithm> // gfg
using namespace std;
vector<int> missing_repeat(vector<int> arr)
{
    int n=arr.size();  // time complexity = O(n)
                       // space complexity = O(n) 

    for(int i=0;i<n;i++)
    arr[i]-=1;

    vector<int> count(n,0); // storing the occurance of number
    for(int i=0;i<n;i++)
    count[arr[i]]++;

    vector<int> ans(2,0);

    // missing number
    for(int i=0;i<n;i++)
    if(count[i]==0)
    {
        ans[0]=i+1;// storing missing number
        break;
    }

    // Repeat number
    for(int i=0;i<n;i++)
    if(count[i]==2)
    {
        ans[1]=i+1;// storing repeated number
        break;
    }

    return ans;
}
int main()
{
    vector<int> arr={4,3,2,1,2,7,6};

    vector<int> ans=missing_repeat(arr);

    cout<<"missing number : "<<ans[0]<<endl;
    cout<<"repeated number : "<<ans[1];

    return 0;
}