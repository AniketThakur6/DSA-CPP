#include <iostream>
#include <vector>
using namespace std;
int start(string haystack,string needle)
{
    int n=haystack.size(),m=needle.size();

    for(int i=0;i<=n-m;i++) // n-m index string char should match if string is present 
    {
        int first=i, second=0;
        while(second<m) // checking of string 
        {
            if(haystack[first]==needle[second])
            first++,second++;

            else
            break;
        }

        if(second==m)
        return first-second;

    }
    return -1;
}
int main()
{
    string haystack="sadbutsad", needle="sad";

    cout<<"first occ of string : "<<start(haystack,needle);

    return 0;

}