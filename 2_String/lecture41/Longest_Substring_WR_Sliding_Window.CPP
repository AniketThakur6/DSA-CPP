#include <iostream>
#include <vector>
using namespace std; // LC
int longest_string(string s)
{
    vector<int> count(256,0);
    int first=0,second=0,maxlen=0;

    while(second<s.size())
    {
        while(count[s[second]])
        {
            count[s[first]]=0;
            first++;
        }

        count[s[second]]=1;

        maxlen=max(maxlen,second-first+1);

        second++;
    }

    return maxlen;
}
int main()
{
    string s="abcabcbb";

    cout<<longest_string(s);
}