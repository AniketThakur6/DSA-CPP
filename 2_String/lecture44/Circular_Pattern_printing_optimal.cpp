#include <iostream>
#include <vector>
using namespace std; // it can be same as rotated string matching problem
void findlps(vector<int> &lps,string s)
{
    int pre=0,suf=1;

    while(suf<s.size())
    {
        if(s[pre==s[suf]])
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
bool string_matching(string s, string find)
{
    // to make it circular add s to s and it is same as matching string problem
    s+=s;

    vector<int> lps(s.size(),0);
    findlps(lps,s);

    int first=0,second=0;

    while(second<find.size() && first<s.size())
    {
        if(s[first]==find[second])
        {
            first++,second++;
        }

        else
        {
            if(second==0)
            first++;

            else
            second=lps[second-1];
        }
    }

    if(second==find.size())
    return 1;

    return 0;
}
int main()
{
    string s = "cdeabroab" , find="abcde";
 
    cout<<string_matching(s,find);

    return 0;
}