#include <iostream>
#include <vector>
using namespace std; // GFG
bool palindrome(string s,int i)
{
    int start=0;
    while(start<=i)
    {
        if(s[start]==s[i])
        {
            start++,i--;
        }
        else
        return 0;
    }

    return 1;
}
int minchar(string s)
{
    int n=s.size();
    int count=0;

    for(int i=n-1;i>=0;i--)
    {
        bool n=palindrome(s,i);

        if(n==1)
        {
            return count;
        }
        else
        count++;
    }

    return -1;
}
int main()
{
    string s="psroor";

    cout<<"min char needed to complete : "<<minchar(s);
}