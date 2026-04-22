#include <iostream>
#include <vector>
using namespace std;
string sort_string(string s) 
{
    vector<int> alpha(26,0);

    for(int i=0;i<s.size();i++)
    alpha[s[i]-'a']++;

    string ans;
    for(int i=0;i<alpha.size();i++)
    {
        char c='a'+i;
        while(alpha[i])
        {
            ans+=c;
            alpha[i]--;
        }
    }

    return ans;

}
int main()
{
    string s="eabcabd";

    string ans=sort_string(s);

    cout<<"Sorted String : "<<ans;
}