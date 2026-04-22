#include <iostream>
#include <vector>
using namespace std; // gfg
int minchar(string s)
{
    string rev=s;
    int n=s.size();
    // reverse
    int i=0, j=n-1;
    while(i<j)
    {
        swap(rev[i],rev[j]);
        i++,j--;
    }
    
    // sperater
    rev+='$';

    // adding reverse string s1
    rev+=s;

    // lps of s string
    vector<int> lps(rev.size(),0);
    int pre=0,suf=1;

    while(suf<rev.size())
    {
        // matching
        if(s[pre]==s[suf])
        {
            lps[suf]=pre+1;
            pre++,suf++;
        }

        // not matching
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

    for(int i:lps)
    cout<<i<<" ";

    cout<<endl;
    return n-lps[rev.size()-1];
}
int main()
{
    string s="aacecaaa";

    cout<<"Min char : "<<minchar(s);
}
