#include <iostream>
#include <vector>
using namespace std;
vector<int> no(vector<int> ans,int target)
{
    int n=ans.size();
    vector<int> v;
    int start=0,end=n-1;
    while(start<end)
    {
       if(ans[start]+ans[end]==target)
       {
        v.push_back(start);
        v.push_back(end);
        return v;
       }
       else if(ans[start]+ans[end]<target)
       start++;
       else
       end--;
    }
    return v;
}
int main()
{
    vector<int>v={2,7,11,15,27};
    int target=9;
    vector<int> ans=no(v,target);
    for(int i:ans)
    cout<<" "<<i<<" ";
}