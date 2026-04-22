#include <iostream>
#include <vector>
using namespace std;
int longestprefixsuffix(string &s)
{
    int n=s.size();
    vector<string> prefix,suffix;
    string temp; 

    // prefix and suffix length should be less than n
    // prefix
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<=i;j++)
        temp+=s[j];

        prefix.push_back(temp);

        temp="";
    }

    temp="";
    //suffix
    for(int i=n-1;i>=1;i--)
    {
        for(int j=i;j<n;j++)
        temp+=s[j];

        suffix.push_back(temp);
        temp="";
    }

    int length=0;
    for(int i=0;i<n;i++)
    {
        if(prefix[i]==suffix[i])
        {
            length=max(length,i+1);
        }
    }

    return length;

}
int main()
{
    string s="ABCDEABCD";

    cout<<"longest prefix and suffix length : "<<longestprefixsuffix(s);

    return 0;
}