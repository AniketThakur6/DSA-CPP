#include <iostream>
#include <vector>
using namespace std;
vector<int> search(string txt, string pat)
{
    vector<int> ans;
    int n=txt.size(), m=pat.size();
    for(int i=0;i<=n-m;i++)
    {
        int first=i,second=0;
        while(second<m)
        {
            if(txt[first]==pat[second])
            first++,second++;

            else
            break;
        }

        if(second==m)
        {
            ans.push_back(first-second);
        }
    }
    
    return ans;
}
int main()
{
    string txt = "aabaacaadaabaaba", pat = "aaba";

    vector<int> ans=search(txt,pat);
    for(int i:ans)
    cout<<i<<" ";
}