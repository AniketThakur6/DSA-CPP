#include <iostream>
using namespace std;
int main()
{
    string address="1.1.1.1";

    string ans;
    int index=0;

    while(index<address.size())
    {
        if(address[index]=='.')
        ans+="[.]";

        else
        ans+=address[index];

        index++;
    }

    cout<<ans;

}