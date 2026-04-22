#include <iostream>
#include <vector>
using namespace std;
int longest_substring(string s)
{
    int maxlen=0;
    if(s.size()==1)
    return 1;

    for(int i=1;i<s.size();i++)
    {
        int start=i-1,end=i;
        vector<bool> lower(256,0);
        while(end<s.size())
        {
            if(s[start]==s[end])
            {
                break;
            }
            else
            {
                int len=end-start+1;
                
                if(lower[s[end]]==0)
                lower[s[end]]=1;
                else
                break;

                if(maxlen<len)
                maxlen=len;

                end++;
            }
        }
    }

    return maxlen;
}
int main()
{
    string s="abce!jdkd";

    cout<<longest_substring(s);
}