#include <iostream>
#include <vector>
using namespace std;
int longestKSubstr(string &s, int k)
{
    int first=0,second=0,len=-1,uniquecount=0;
    vector<int> lower(26,0);

    while(second<s.size())
    {
        //increase window size
        if(lower[s[second]-'a']==0)
        uniquecount++;

        lower[s[second]-'a']++;

        second++;

        // shrink the window size
        while(uniquecount>k)
        {
            lower[s[first]-'a']--;

            if(lower[s[first]-'a']==0)
            uniquecount--;

            first++;
        }

        // when unique char = k
        if(uniquecount==k)
        len=max(len,second-first);

    }

    return len;
}
int main()
{
    string s="aabacbebebe";
    int k = 3;

    cout<<longestKSubstr(s,k);

    return 0;
}