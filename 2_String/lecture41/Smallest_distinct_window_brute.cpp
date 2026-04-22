#include <iostream>
#include <vector>
using namespace std;
int smallest_distinct(string s)
{
    int size=s.size();
    int diff=0,first=0,len=size;
    vector<int> count(256,0);

    while(first<size)
    {
        if(count[s[first]]==0)
        diff++;

        count[s[first]]++;

        first++;
    }

    for(int i=0;i<256;i++)
    count[i]=0;

    for(int i=0;i<size;i++)
    {
        int di=diff;
        for(int j=i;j<size;j++)
        {
            if(count[s[j]]==0)
            di--;

            count[s[j]]++;

            if(di==0)
            {
                len=min(len,j-i+1);
                break;
            }
        }

        for(int k=0;k<256;k++)  //not working 
        count[k]=0;

    }

    return len;
}
int main()
{
    string s = "aabbbcbbacd";

    cout<<smallest_distinct(s);
}