#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> prefix(vector<int> arr)
{
    vector<int>v;
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        v.push_back(sum);
    }
    return v;
}
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    vector<int> arr=prefix(v);
    for(int i: arr)
    cout<<i<<" ";
}