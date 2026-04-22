#include <iostream>
#include <vector>
using namespace std;
int smallestsubstring(string s)
{
    int diff=3,second=0,first=0,len=s.size();
    vector<int> count(3,0);

    for(int i=0;i<s.size();i++)
    count[s[i]-'0']++;

    for(int i=0;i<3;i++)
    {
        if(count[i]==0)
        return -1;
    }

    for(int i=0;i<3;i++)
    count[i]=0;

    while(second<s.size())
    {
        while(diff && second<s.size())
        {
            if(count[s[second]-'0']==0)
            diff--;

            count[s[second]-'0']++;

            second++;
        }

        while(diff==0)
        {
            len=min(len,second-first);
            count[s[first]-'0']--;

            if(count[s[first]-'0']==0)
            diff++;

            first++;
        }

    }

    return len;

}
int main()
{
    string s="022001";

    cout<<"smallest window contianing 0,1 & 2 : "<<smallestsubstring(s);
}