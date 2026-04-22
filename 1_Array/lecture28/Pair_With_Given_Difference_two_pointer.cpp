#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> no(vector<int> ans,int target)
{
    vector<int>v;
    int start=0,end=1;
    sort(ans.begin(),ans.end());
    while(end<ans.size())
    {
        if(ans[end]-ans[start]==target)
        {
            v.push_back(start);
            v.push_back(end);
            return v;
        }
        else if(ans[end]-ans[start]<target)
        end++;
        else
        start++;
    }
    return v;
}
int main()
{
    vector<int>v={5, 10, 3, 2, 50, 80};
    int target=78;
    vector<int> ans=no(v,target);
    for(int i:ans)
    cout<<i<<" ";
}