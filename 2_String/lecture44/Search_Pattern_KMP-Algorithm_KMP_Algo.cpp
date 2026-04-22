#include <iostream>
#include <vector>
using namespace std;
void findlps(vector<int> &lps, string s)
{
    int pre=0,suf=1;

    while(suf<s.size())
    {
        if(s[pre]==s[suf])
        {
            lps[suf]=pre+1;
            pre++,suf++;
        }

        else
        {
            if(pre==0)
            {
                lps[suf]=0;
                suf++;
            }

            else
            pre=lps[pre-1];
        }
    }
}
vector<int> search(string txt,string pat)
{
    int m=pat.size();
    vector<int> lps(m,0);

    findlps(lps,pat);
    vector<int> ans;

    int first=0,second=0;
    while(first<txt.size())
    {
        if(txt[first]==pat[second])
        first++,second++;

        else
        {
            if(second==0)
            first++;

            else
            second=lps[second-1];
        }

        if(second==m)
        {
            ans.push_back(first-second);
            second = lps[second - 1];
        }
    }

    if(second==m)
    ans.push_back(first-second);

    return ans;
}
int main()
{
    string txt = "aabaacaadaabaaba", pat = "aaba";

    vector<int> ans=search(txt,pat);

    for(int i:ans)
    cout<<i<<" ";

    return 0;
} 