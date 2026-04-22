#include <iostream>
#include <vector>
using namespace std;
bool pangram(string s)
{
    vector<bool> alpha(26,0);

    for(int i=0;i<s.size();i++)
    alpha[s[i]-'a']=1;

    for(int i=0;i<alpha.size();i++)
    if(alpha[i]==0)
    return 0;

    return 1;
} 
int main()
{
    string sentence="thequickbrownfoxjumpsoverthelazydog";

    cout<<pangram(sentence);
}