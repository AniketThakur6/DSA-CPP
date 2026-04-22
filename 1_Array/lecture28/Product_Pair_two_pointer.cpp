#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> no(vector<int>arr,long long target)
{
    int n=arr.size();
    int start=0,end=n-1;
    vector<int> v;
    while(start<end)
    {
        int product=arr[start]*arr[end];
        if(product==target)
        {
            v.push_back(start);
            v.push_back(end);
            return v;
        }
        if(product<target)
        start++;
        else
        end--;
    }
    return v;
}
int main()
{
    vector<int>v={10, 20, 9, 40,-20,-10,90,45,-26};
    long long target=400;
    vector<int> arr=no(v,target);
    for(auto i:arr)
    cout<<i<<" ";
}