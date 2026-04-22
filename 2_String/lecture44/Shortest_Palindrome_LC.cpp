#include <iostream>
#include <vector>
using namespace std;
string shortestPalindrome(string s)
{
    string rev=s;

    int size=s.size();
    int i=0,j=rev.size()-1;
    while(i<j)
    {
        swap(rev[i],rev[j]);
        i++,j--;
    }

    string ans=rev, copy=s;
    s+='$';
    s+=rev;

    vector<int> lps(s.size(),0);

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

    for(int i=lps[s.size()-1]; i<copy.size();i++)
    ans+=copy[i];

    return ans;

    // for(int i:lps)
    // cout<<i<<" ";

    // cout <<endl;
    // return size-lps[s.size()-1];

}

int main()
{
    string s="abcd";

    cout<<shortestPalindrome(s);

    return 0;
}