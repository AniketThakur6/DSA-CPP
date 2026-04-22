#include <iostream>
#include <vector>
using namespace std;
string casesort(string s)
{
    vector<int> lower(26,0) ,upper(26, 0);

    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a')
        {
            lower[s[i]-'a']++;
            s[i]='#';
        }

        else
        {
            upper[s[i]-'A']++;
            s[i]='?';
        }
    }

    // string lowercase,uppercase;
    // for(int i=0;i<26;i++)
    // {
    //     char c='A'+i;
    //     while(upper[i])
    //     {
    //         uppercase+=c;
    //         upper[i]--;
    //     }
    // }

    // for(int i=0;i<26;i++)
    // {
    //     char c='a'+i;
    //     while(lower[i])
    //     {
    //         lowercase+=c;
    //         lower[i]--;
    //     }
    // }

    // int first=0,second=0;
    // while(first<s.size())
    // {
    //     if(s[first]=='?')
    //     {
    //         s[first]=uppercase[second];
    //         second++;
    //     }
    //     first++;
    // }

    // first=0,second=0;
    // while(first<s.size())
    // {
    //     if(s[first]=='#')
    //     {
    //         s[first]=lowercase[second];
    //         second++;
    //     }
    //     first++;
    // }

    // int i=0,j=0;

    // for(char &c: s)
    // {
    //     if(c=='#')
    //     {
    //         while(lower[i]==0)
    //         i++;

    //         c='a'+i;
    //         lower[i]--;
    //     }
    //     else if(c=='?')
    //     {
    //         while(upper[j]==0)
    //         j++;

    //         c='A'+j;
    //         upper[j]--;
    //     }
    // }

    int lowerindex=0,upperindex=0;

    for(int i=0;i<s.size();i++) // ai help
        {
            if(s[i]=='#')
            {
                while(lower[lowerindex]==0)
                lowerindex++;
                
                s[i]=lowerindex+'a';
                
                lower[lowerindex]--;
            }
            
            else if(s[i]=='?')
            {
                while(upper[upperindex]==0)
                upperindex++;
                
                s[i]=upperindex+'A';
                
                upper[upperindex]--;
            }
        }

    return s;

}
int main()
{
    string str="xxLqYztKaIHj";   // ajHqItxKxLYz

    cout<<casesort(str);
}