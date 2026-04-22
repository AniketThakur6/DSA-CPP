#include <iostream>
#include <vector>
using namespace std;
void findlps(vector<int> &lps,string s)
{
    int pre=0, suf=1;

    while(suf<s.size())
    {
        if(s[pre]==s[suf])
        {
            lps[suf]=pre+1;
            suf++,pre++;
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
int start(string haystack,string needle)
{
    vector<int> lps(needle.size(),0);
    int first=0,second=0;
    findlps(lps,needle);

    while(second<needle.size() && first<haystack.size())
    {
        if(haystack[first]==needle[second])
        first++,second++;

        else
        {
            if(second==0)
            first++;

            else
            second=lps[second-1];
        }
    }

    if(second==needle.size())
    return first-second;

    return -1;
}

int main()
{
    string haystack="abc", needle="c";
 
    cout<<"first occ of string : "<<start(haystack,needle);

    return 0;
}