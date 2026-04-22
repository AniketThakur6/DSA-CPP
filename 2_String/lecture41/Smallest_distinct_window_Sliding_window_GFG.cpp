#include <iostream>
#include <vector> // gfg
using namespace std;
int smallest_substring(string s)
{
    vector<int> count(256,0);
    int first=0,second=0,diff=0,len=s.size();

    // counting unique element
    while(first<s.size())
    {
        if(count[s[first]]==0)
        diff++;

        count[s[first]]++;
        first++;
    }

    //reseting count value to 0
    for(int i=0;i<256;i++)
    count[i]=0;

    first=0;

    //sliding window
    while(second<s.size())
    {
        //if diff exist increase window size
        while(diff && second<s.size())
        {
            if(count[s[second]]==0)
            diff--;

            count[s[second]]++;

            second++;
        }

        //if diff doesn't exist decrease window size
        while(diff==0)
        {
            len=min(len,second-first);
            count[s[first]]--;

            if(count[s[first]]==0)
            diff++;

            first++;
        }
    }

    return len;
}

int main()
{
    string s="The sliding window approach ensures that";

    cout<<smallest_substring(s);
}