#include <iostream>
#include <vector>
using namespace std;
void sort_string(string &s) // gfg
{
    vector<int> alpha(26,0);

    for(int i=0;i<s.size();i++)
    alpha[s[i]-'a']++;

    s.clear();

    for(int i=0;i<alpha.size();i++)
    {
        char c='a'+i;
        while(alpha[i])
        {
            s+=c;
            alpha[i]--;
        }
    }
}
int main()
{
    string s="eabcabd";

    sort_string(s);
     
    cout<<"Sorted String : "<<s;
}