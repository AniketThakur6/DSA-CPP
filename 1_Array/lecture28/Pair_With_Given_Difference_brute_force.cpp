#include <iostream>
#include <vector>
using namespace std;
vector<int> no(vector<int> ans,int target)
{
    int n=ans.size();
    vector<int>v;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ans[j]-ans[i]==target)
            {
                v.push_back(i);
                v.push_back(j);
                return v;
            }
        }
    }
    return v;
}
int main()
{
    vector<int>v={5, 10, 3, 2, 50, 80};
    int target=78;
    vector<int>ans=no(v,target);
    for(int i:ans)
    cout<<i<<" ";
}