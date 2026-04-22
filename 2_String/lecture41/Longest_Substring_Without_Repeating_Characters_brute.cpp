#include <iostream>
using namespace std; // LC
int longest_substring(string s)
{
    int maxlen=0;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i;j<s.size();j++)
        {
            bool unique=true;
            for(int k=i;k<j;k++)
            {
                if(s[k]==s[j])
                {
                    unique=false;
                    break;
                }
            }
            if(unique==true)
            {
                int len=j-i+1;
                if(maxlen<len)
                maxlen=len;
            }
            else
            break;
        }
    }

    return maxlen;
}

int main()
{
    string s="";

    cout<<longest_substring(s);
}