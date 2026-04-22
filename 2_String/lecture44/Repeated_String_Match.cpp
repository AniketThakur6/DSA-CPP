#include <iostream>
#include <vector>
using namespace std;

void findlps(vector<int> &lps,string b)
{
    int pre=0,suf=1;

    while(suf<b.size())
    {
        if(b[pre]==b[suf])
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

bool kmp_match(string s, string b)
{
    vector<int> lps(b.size(),0);
    findlps(lps,b);

    int first=0,second=0;
    
    while(first<s.size() && second<b.size())
    {
        if(s[first]==b[second])
        first++,second++;

        else
        {
            if(second==0)
            first++;

            else
            second=lps[second-1];
        }
    }

    if(second==b.size())
    return 1;

    return 0;
}

int repeatedstringmatching(string a, string b)
{
    if(a==b)
    return 1;

    int repeated=1;
    string temp=a;

    while(temp.size()<b.size())
    {
        repeated++;
        temp+=a;
    }

    // kmp matching 
    if(kmp_match(temp,b)==1)
    return repeated;

    // temp+a kmp match 
    if(kmp_match(temp+a,b)==1)
    return repeated+1;

    return -1;
}
int main()
{
    string a = "abcd", b = "cdabcdab";

    cout<<"no of times to repeat to have a match : "<<repeatedstringmatching(a,b);

    return 0;
}