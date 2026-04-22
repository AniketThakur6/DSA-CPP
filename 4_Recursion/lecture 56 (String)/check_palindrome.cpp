#include <iostream>
using namespace std;
int checkpal(string str,int start,int end)
{
    if(start>=end)
    return 1;

    if(str[start]!=str[end])
    return 0;

    return checkpal(str,start+1,end-1);
}
int main()
{
    string str = "NAMAN";
    cout<<checkpal(str,0,4);
}